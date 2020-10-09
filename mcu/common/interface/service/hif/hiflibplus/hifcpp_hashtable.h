#ifndef  _HIFLIB_CPP_HASHTABLE_INC
#define  _HIFLIB_CPP_HASHTABLE_INC
/****************************************************************************/

extern "C"
{
#include "kal_public_api.h"
}

#define HIFCPP_HASH_INITVAL                0xdeadbeef

#define HIFCPP_HASH_MIX(a, b, c)            \
{                                           \
    a -= c;  a ^= rol32(c, 4);  c += b;     \
    b -= a;  b ^= rol32(a, 6);  a += c;     \
    c -= b;  c ^= rol32(b, 8);  b += a;     \
    a -= c;  a ^= rol32(c, 16); c += b;     \
    b -= a;  b ^= rol32(a, 19); a += c;     \
    c -= b;  c ^= rol32(b, 4);  b += a;     \
}

#define HIFCPP_HASH_FINAL(a, b, c)          \
{                                           \
    c ^= b; c -= rol32(b, 14);              \
    a ^= c; a -= rol32(c, 11);              \
    b ^= a; b -= rol32(a, 25);              \
    c ^= b; c -= rol32(b, 16);              \
    a ^= c; a -= rol32(c, 4);               \
    b ^= a; b -= rol32(a, 14);              \
    c ^= b; c -= rol32(b, 24);              \
}

static inline unsigned rol32(unsigned w, unsigned sft)
{
    return (w << sft) | (w >> ((~sft + 1) & 31));
}

template <class KeyType, class MapType> class Hifcpp_HashNode {
public:
    KeyType key;
    MapType val;
    Hifcpp_HashNode* next;
};

template <class KeyType, class MapType> class Hifcpp_HashTable {
public:

//    virtual void* h_mem_alloc(size_t size) = 0;
//    virtual void h_mem_free(void* p) = 0;

    Hifcpp_HashTable()
    {
        h_table_num = 0;
        h_table = NULL;
        h_mem_alloc = NULL;
        h_mem_free = NULL;
    }

    void init(unsigned h_num, void* (*allocator)(size_t size), void (*deallocator)(void* p))
    {
        unsigned i;

        ASSERT(h_num > 0);
        ASSERT(allocator);
        ASSERT(deallocator);
        h_table_num = h_num;
        h_mem_alloc = allocator;
        h_mem_free = deallocator;
        h_table = (Hifcpp_HashNode<KeyType, MapType>**)(h_mem_alloc(sizeof(Hifcpp_HashNode<KeyType, MapType>*) * h_table_num));
        ASSERT(h_table);

        for( i = 0; i < h_table_num; ++i) {
            h_table[i] = NULL;
        }
    }

    void deinit()
    {
        if(h_table && (h_table_num > 0)) {
            clear();
            h_mem_free(h_table);
        }

        h_table_num = 0;
        h_table = NULL;
        h_mem_alloc = NULL;
        h_mem_free = NULL;
    }

    ~Hifcpp_HashTable()
    {
        deinit();
    }

    Hifcpp_HashNode<KeyType, MapType>* getNode(KeyType key)
    {
        Hifcpp_HashNode<KeyType, MapType>* curr_node = NULL;
        unsigned index = Hifcpp_HashTableFunc(key) % h_table_num;

        curr_node = h_table[index];

        while(curr_node && (key != curr_node->key)) {
            curr_node = curr_node->next;
        }

        return curr_node;
    }

    MapType& operator[](KeyType key)
    {
        Hifcpp_HashNode<KeyType, MapType>* curr_node = NULL;
        unsigned index = Hifcpp_HashTableFunc(key) % h_table_num;

        curr_node = h_table[index];

        while(curr_node && (key != curr_node->key)) {
            curr_node = curr_node->next;
        }

        if(!curr_node) {
            curr_node = (Hifcpp_HashNode<KeyType, MapType>*)h_mem_alloc(sizeof(Hifcpp_HashNode<KeyType, MapType>));
            ASSERT(curr_node);
            curr_node->key = key;
            curr_node->next = h_table[index];
            h_table[index] = curr_node;
        }

        return curr_node->val;
    }

    void erase(KeyType key)
    {
        Hifcpp_HashNode<KeyType, MapType> *curr_node = NULL, *priv_node = NULL;
        unsigned index = Hifcpp_HashTableFunc(key) % h_table_num;

        curr_node = h_table[index];

        while(curr_node && (key != curr_node->key)) {
            priv_node = curr_node;
            curr_node = curr_node->next;
        }

        if(curr_node) {
            if(!priv_node) {
                h_table[index] = curr_node->next;
            }
            else {
                priv_node->next = curr_node->next;
            }
            (curr_node->val).~MapType();
            (curr_node->key).~KeyType();
            h_mem_free(curr_node);
        }
    }


    void clear()
    {
        Hifcpp_HashNode<KeyType, MapType> *curr_node = NULL;
        unsigned index;

        for(index = 0; index < h_table_num; ++index) {
            curr_node = h_table[index];

            while(curr_node) {
                h_table[index] = curr_node->next;
                (curr_node->val).~MapType();
                (curr_node->key).~KeyType();
                h_mem_free(curr_node);
                curr_node = h_table[index];
            }
        }
    }

private:
    Hifcpp_HashNode<KeyType, MapType>** h_table;
    unsigned h_table_num;
    void* (*h_mem_alloc)(size_t size);
    void (*h_mem_free)(void* p);

    unsigned Hifcpp_HashTableFunc(KeyType key)
    {
        unsigned length = sizeof(KeyType);
        unsigned init_val = sizeof(key);
        const unsigned char *k = (unsigned char*)&key;
        unsigned a, b, c;
  
        a = b = c = HIFCPP_HASH_INITVAL + length + init_val;
 
        while (length > 12) {
            a += *((unsigned*)k);
            b += *((unsigned*)k + 1);
            c += *((unsigned*)k + 2);
            HIFCPP_HASH_MIX(a, b, c);
            length -= 12;
            k += 12;
        }
 
        switch (length) {
            case 12: c += (unsigned)k[11]<<24;
            case 11: c += (unsigned)k[10]<<16;
            case 10: c += (unsigned)k[9]<<8;
            case 9:  c += (unsigned)k[8];
            case 8:  b += (unsigned)k[7]<<24;
            case 7:  b += (unsigned)k[6]<<16;
            case 6:  b += (unsigned)k[5]<<8;
            case 5:  b += (unsigned)k[4];
            case 4:  a += (unsigned)k[3]<<24;
            case 3:  a += (unsigned)k[2]<<16;
            case 2:  a += (unsigned)k[1]<<8;
            case 1:  a += (unsigned)k[0];
                 HIFCPP_HASH_FINAL(a, b, c);
            case 0: /* Nothing left to add */
                break;
        }

        return c; 
    }
};

#endif
