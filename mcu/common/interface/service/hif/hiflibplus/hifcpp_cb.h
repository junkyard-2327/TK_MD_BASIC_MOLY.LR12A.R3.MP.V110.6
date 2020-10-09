#ifndef  _HIFLIB_CPP_CB_INC
#define  _HIFLIB_CPP_CB_INC
/****************************************************************************/

extern "C" 
{
#include "kal_public_api.h"
}

/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 

/* circular buffer */
template <class cbType> class hifcpp_cb_manager {

public:
    explicit hifcpp_cb_manager(void* cbPtr, unsigned byteSize)
    {
        ASSERT(cbPtr);
        ASSERT(0 != byteSize);
        ASSERT((byteSize / sizeof(cbType)) > 1);

        this->cbBase = this->readPtr = this->writePtr = (cbType*)cbPtr;
        this->cbSize = byteSize;
        this->elm_num = byteSize / sizeof(cbType);
    }

    bool is_full()
    {
        cbType* nextWrite = this->get_next_writePtr();
        return (nextWrite == this->readPtr);
    }

    bool is_empty()
    {
        return (this->readPtr == this->writePtr);
    }

    bool push_back(cbType cbElm)
    {
        bool result = false;

        if(!this->is_full()) {
            *(this->writePtr) = cbElm;
            this->writePtr = this->get_next_writePtr();
            result = true;
        }
        else {
            ASSERT(0);
        }

        return result;
    }

    cbType pop_front()
    {
        cbType val;

        if(!this->is_empty()) {
            val = *(this->readPtr);
            this->readPtr = this->get_next_readPtr();
        }
        else {
            ASSERT(0);
        }

        return val;
    }

    cbType top()
    {
        cbType val;

        if(!this->is_empty()) {
            val = *(this->readPtr);
        }
        else {
            ASSERT(0);
        }

        return val;
    }

    cbType* get_curr_writePtr()
    {
        return writePtr;
    }

    cbType* get_curr_readPtr()
    {
        return readPtr;
    }

private:
    cbType* cbBase;
    cbType* readPtr;
    cbType* writePtr;
    unsigned cbSize;
    unsigned elm_num;

    cbType* get_next_writePtr()
    {
        cbType* nextWrite = this->cbBase + ((this->writePtr + 1 - this->cbBase) % elm_num);
        return nextWrite;
    }

    cbType* get_next_readPtr()
    {
        cbType* nextRead = this->cbBase + ((this->readPtr + 1 - this->cbBase) % elm_num);
        return nextRead;
    }

};

/****************************************************************************
 * Unit Test
 ****************************************************************************/

/****************************************************************************/
#endif /* _HIFLIB_CPP_CB_INC */

