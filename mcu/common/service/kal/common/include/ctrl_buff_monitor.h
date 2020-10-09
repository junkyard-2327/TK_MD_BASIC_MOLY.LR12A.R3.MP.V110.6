#ifndef __CTRL_BUFF_MONITOR_H__
#define __CTRL_BUFF_MONITOR_H__

#include "kal_public_api.h"

#if defined(DEBUG_KAL) && defined(DEBUG_BUF2) && defined(DEBUG_CBAM_GLOBAL)
#ifdef QUEUE_MACRO_DEBUG
/* Store the last 2 places the queue element or head was altered */
struct qm_trace {
        char * lastfile;
        int lastline;
        char * prevfile;
        int prevline;
};

#define TRACEBUF        struct qm_trace trace;
#define TRASHIT(x)      do {(x) = (void *)-1;} while (0)
#define QMD_SAVELINK(name, link)        void **name = (void *)&(link)

#define QMD_TRACE_HEAD(head) do {                                       \
        (head)->trace.prevline = (head)->trace.lastline;                \
        (head)->trace.prevfile = (head)->trace.lastfile;                \
        (head)->trace.lastline = __LINE__;                              \
        (head)->trace.lastfile = __FILE__;                              \
} while (0)

#define QMD_TRACE_ELEM(elem) do {                                       \
        (elem)->trace.prevline = (elem)->trace.lastline;                \
        (elem)->trace.prevfile = (elem)->trace.lastfile;                \
        (elem)->trace.lastline = __LINE__;                              \
        (elem)->trace.lastfile = __FILE__;                              \
} while (0)

#else
#define QMD_TRACE_ELEM(elem)
#define QMD_TRACE_HEAD(head)
#define QMD_SAVELINK(name, link)
#define TRACEBUF
#define TRASHIT(x)
#endif  /* QUEUE_MACRO_DEBUG */


/*
 * Singly-linked Tail queue declarations.
 */
#define STAILQ_HEAD(name, type)                                         \
struct name {                                                           \
        struct type *stqh_first;/* first element */                     \
        struct type **stqh_last;/* addr of last next element */         \
}

#define STAILQ_HEAD_INITIALIZER(head)                                   \
        { NULL, &(head).stqh_first }

#define STAILQ_ENTRY(type)                                              \
struct {                                                                \
        struct type *stqe_next; /* next element */                      \
}

/*
 * Singly-linked Tail queue functions.
 */
#define STAILQ_CONCAT(head1, head2) do {                                \
        if (!STAILQ_EMPTY((head2))) {                                   \
                *(head1)->stqh_last = (head2)->stqh_first;              \
                (head1)->stqh_last = (head2)->stqh_last;                \
                STAILQ_INIT((head2));                                   \
        }                                                               \
} while (0)

#define STAILQ_EMPTY(head)      ((head)->stqh_first == NULL)

#define STAILQ_FIRST(head)      ((head)->stqh_first)

#define STAILQ_FOREACH(var, head, field)                                \
        for((var) = STAILQ_FIRST((head));                               \
           (var);                                                       \
           (var) = STAILQ_NEXT((var), field))


#define STAILQ_FOREACH_SAFE(var, head, field, tvar)                     \
        for ((var) = STAILQ_FIRST((head));                              \
            (var) && ((tvar) = STAILQ_NEXT((var), field), 1);           \
            (var) = (tvar))

#define STAILQ_INIT(head) do {                                          \
        STAILQ_FIRST((head)) = NULL;                                    \
        (head)->stqh_last = &STAILQ_FIRST((head));                      \
} while (0)

#define STAILQ_INSERT_AFTER(head, tqelm, elm, field) do {               \
        if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL)\
                (head)->stqh_last = &STAILQ_NEXT((elm), field);         \
        STAILQ_NEXT((tqelm), field) = (elm);                            \
} while (0)

#define STAILQ_INSERT_HEAD(head, elm, field) do {                       \
        if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) \
                (head)->stqh_last = &STAILQ_NEXT((elm), field);         \
        STAILQ_FIRST((head)) = (elm);                                   \
} while (0)

#define STAILQ_INSERT_TAIL(head, elm, field) do {                       \
        STAILQ_NEXT((elm), field) = NULL;                               \
        *(head)->stqh_last = (elm);                                     \
        (head)->stqh_last = &STAILQ_NEXT((elm), field);                 \
} while (0)

#define STAILQ_LAST(head, type, field)                                  \
        (STAILQ_EMPTY((head)) ?                                         \
                NULL :                                                  \
                ((struct type *)(void *)                                \
                ((char *)((head)->stqh_last) - __offsetof(struct type, field))))

#define STAILQ_NEXT(elm, field) ((elm)->field.stqe_next)

#define STAILQ_REMOVE(head, elm, type, field) do {                      \
        QMD_SAVELINK(oldnext, (elm)->field.stqe_next);                  \
        if (STAILQ_FIRST((head)) == (elm)) {                            \
                STAILQ_REMOVE_HEAD((head), field);                      \
        }                                                               \
        else {                                                          \
                struct type *curelm = STAILQ_FIRST((head));             \
                while (STAILQ_NEXT(curelm, field) != (elm))             \
                        curelm = STAILQ_NEXT(curelm, field);            \
                STAILQ_REMOVE_AFTER(head, curelm, field);               \
        }                                                               \
        TRASHIT(*oldnext);                                              \
} while (0)

#define STAILQ_REMOVE_AFTER(head, elm, field) do {                      \
        if ((STAILQ_NEXT(elm, field) =                                  \
             STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL)      \
                (head)->stqh_last = &STAILQ_NEXT((elm), field);         \
} while (0)

#define STAILQ_REMOVE_HEAD(head, field) do {                            \
        if ((STAILQ_FIRST((head)) =                                     \
             STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL)         \
                (head)->stqh_last = &STAILQ_FIRST((head));              \
} while (0)

#define STAILQ_SWAP(head1, head2, type) do {                            \
        struct type *swap_first = STAILQ_FIRST(head1);                  \
        struct type **swap_last = (head1)->stqh_last;                   \
        STAILQ_FIRST(head1) = STAILQ_FIRST(head2);                      \
        (head1)->stqh_last = (head2)->stqh_last;                        \
        STAILQ_FIRST(head2) = swap_first;                               \
        (head2)->stqh_last = swap_last;                                 \
        if (STAILQ_EMPTY(head1))                                        \
                (head1)->stqh_last = &STAILQ_FIRST(head1);              \
        if (STAILQ_EMPTY(head2))                                        \
                (head2)->stqh_last = &STAILQ_FIRST(head2);              \
} while (0)


/* CBAM = Control Buffer Allocated Monitor */
#if defined(__UMTS_RAT__) || defined(__LTE_RAT__)
#define CBAM_LIST_SIZE  (NUM_CTRL_BUFF_POOL_SIZE32 + \
                         NUM_CTRL_BUFF_POOL_SIZE64 + \
                         NUM_CTRL_BUFF_POOL_SIZE128 + \
                         NUM_CTRL_BUFF_POOL_SIZE256 + \
                         NUM_CTRL_BUFF_POOL_SIZE512 + \
                         NUM_CTRL_BUFF_POOL_SIZE1024 + \
                         NUM_CTRL_BUFF_POOL_SIZE2048 + \
                         NUM_CTRL_BUFF_POOL_SIZE4096 + \
                         NUM_CTRL_BUFF_POOL_SIZE8192 + \
                         NUM_CTRL_BUFF_POOL_SIZE16384 + \
                         NUM_CTRL_BUFF_POOL_SIZE32768 + \
                         NUM_CTRL_BUFF_POOL_SIZE65536 + \
                         NUM_CTRL_BUFF_POOL_SIZE100000    )
#else
#define CBAM_LIST_SIZE  (NUM_CTRL_BUFF_POOL_SIZE32 + \
                         NUM_CTRL_BUFF_POOL_SIZE64 + \
                         NUM_CTRL_BUFF_POOL_SIZE128 + \
                         NUM_CTRL_BUFF_POOL_SIZE256 + \
                         NUM_CTRL_BUFF_POOL_SIZE512 + \
                         NUM_CTRL_BUFF_POOL_SIZE1024 + \
                         NUM_CTRL_BUFF_POOL_SIZE2048 + \
                         NUM_CTRL_BUFF_POOL_SIZE4096      )
#endif

/*******************************************************************************
 * Defines for Ctrl Buffer Allocated Monitor
 *******************************************************************************/
struct ctrl_buff_alloc_entry {
        void *ptr;
        STAILQ_ENTRY(ctrl_buff_alloc_entry) entries;    /* Tail queue. */
        kal_bool used;
};

typedef struct{
    kal_uint32  buf_size;
    kal_uint32  line;
    const kal_char    *filename;
    module_type mod_id;
}ctrl_buff_info_struct;

KAL_PROTECT_DECLARE_EXTERN(cbam_protect);
extern struct ctrl_buf_alloc_head cbam_head;
extern struct ctrl_buff_alloc_entry cbam_list[];
extern kal_bool   cbam_global_enable;

STAILQ_HEAD(ctrl_buf_alloc_head, ctrl_buff_alloc_entry);

#define CBAM_GLOBAL_INSERT_BUFFER(h, b, l, p)                              \
	do{                                                                    \
		if(KAL_TRUE == cbam_global_enable)                                 \
		{                                                                  \
			CBAM_INSERT_BUFFER(h, b, l, p);                                \
		}                                                                  \
	}while(0)
	
#define CBAM_GLOBAL_REMOVE_BUFFER(h, b)                                    \
	do{                                                                    \
		if(KAL_TRUE == cbam_global_enable)                                 \
		{                                                                  \
            CBAM_REMOVE_BUFFER(h, b);                                      \
		}																   \
	}while(0)

#define CBAM_GLOBAL_DEFINED(def_expr, undef_expr) def_expr


/*************************************************************************
* FUNCTION
*  ctrl_buff_force_reset_and_free
*
* DESCRIPTION
*  reset the CBAM list, free all buffer in the lhead
*
* PARAMETERS
*  lhead  -  control buffer allocated monitor list head
*
* RETURNS
*  KAL_SUCCESS      - all operations are success
*  KAL_NOT_PRESENT  - do nothing if DEBUG_CBAM_GLOBAL is not defined and 
*                     NULL == lhead
*
* GLOBALS AFFECTED
*
*************************************************************************/
extern kal_status ctrl_buff_force_reset_and_free(struct ctrl_buf_alloc_head *lhead, kal_uint32 *free_count);

/*************************************************************************
* FUNCTION
*  ctrl_buff_monlist_pop
*
* DESCRIPTION
*  get the current allocated control buffer information(potential memory leak)
*  the popped buffer will be freed in this function
*
* PARAMETERS
*  lhead  -  control buffer allocated monitor list head
*  cbis   -  control buffer allocated buffer's information
*
* RETURNS
*  KAL_NOT_PRESENT  - this function is not available (not correct debug level)
*  KAL_NULL_ADDRESS - allocated list is empty
*  KAL_SUCCESS      - all operations are success
*
* GLOBALS AFFECTED
*
*************************************************************************/
extern kal_status ctrl_buff_monlist_pop(struct ctrl_buf_alloc_head *lhead, ctrl_buff_info_struct *cbis);

/*************************************************************************
* FUNCTION
*  ctrl_buff_global_allocated_mon_enb
*
* DESCRIPTION
*  enable the global allocated buffer monitor
*
* PARAMETERS
*  enable  -  enable or disable the global monitor
*
* RETURNS
*  KAL_NOT_PRESENT  - this function is not available (not correct debug level)
*  KAL_SUCCESS      - all operations are success
*
* GLOBALS AFFECTED
*
*************************************************************************/
extern kal_status ctrl_buff_global_allocated_mon_enb(kal_bool enable);

/*************************************************************************
* FUNCTION
*  ctrl_buff_get_alloc_entry
*
* DESCRIPTION
*  find the available CBAM entry from entry_pool
*
* PARAMETERS
*  entry_pool -  CBAM entry pool
*  max_num    -  maximal items in the entry_pool
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
extern struct ctrl_buff_alloc_entry* ctrl_buff_get_alloc_entry(
	struct ctrl_buff_alloc_entry *entry_pool, 
	kal_uint32 max_num);

/*************************************************************************
* FUNCTION
*  ctrl_buff_monlist_element_count
*
* DESCRIPTION
*  get the element number in the lhead
*
* PARAMETERS
*  lhead  -  control buffer allocated monitor list head
*
* RETURNS
*  KAL_SUCCESS      - all operations are success
*  KAL_NOT_PRESENT  - do nothing if DEBUG_CBAM_GLOBAL is not defined and 
*                     NULL == lhead
*
* GLOBALS AFFECTED
*
*
*************************************************************************/
extern kal_status ctrl_buff_monlist_element_count(
	struct ctrl_buf_alloc_head *lhead, \
    kal_uint32 *count);

#if defined (__SMP_ARCH__)
#define CBAM_INSERT_BUFFER(list_head, buff_ptr, list_pool, pool_count)\
    do{                                                                        \
          struct ctrl_buff_alloc_entry *tmp;                                   \
          kal_uint32 old_mask;                                                 \
                                                                               \
          tmp = ctrl_buff_get_alloc_entry((list_pool), (pool_count));          \
          tmp->ptr = buff_ptr;                                                 \
                                                                               \
          kal_take_internal_protect(cbam_protect);                            \
          STAILQ_INSERT_TAIL(&(list_head), tmp, entries);                    \
          kal_give_internal_protect(cbam_protect);   					     \
       }while(0)

#define CBAM_REMOVE_BUFFER(list_head, buff_ptr)                                \
    do{                                                                        \
        struct ctrl_buff_alloc_entry *entry_iter;                              \
        kal_uint32 old_mask;                                                   \
    	                                                                       \
        kal_take_internal_protect(cbam_protect);							   \
    	STAILQ_FOREACH(entry_iter, &(list_head), entries)                      \
    	{                                                                      \
    		if(entry_iter->ptr == buff_ptr)                                    \
    		{                                                                  \
    			STAILQ_REMOVE(&(list_head), entry_iter, ctrl_buff_alloc_entry, entries);\
    			entry_iter->used = KAL_FALSE;                                  \
    			break;                                                         \
    		}		                                                           \
    	}                                                                      \
       kal_give_internal_protect(cbam_protect);							       \
       }while(0)
#else
#define CBAM_INSERT_BUFFER(list_head, buff_ptr, list_pool, pool_count)\
    do{                                                                        \
          struct ctrl_buff_alloc_entry *tmp;                                   \
          kal_uint32 old_mask;                                                 \
                                                                               \
          tmp = ctrl_buff_get_alloc_entry((list_pool), (pool_count));          \
          tmp->ptr = buff_ptr;                                                 \
                                                                               \
          old_mask = SaveAndSetIRQMask();                                      \
          STAILQ_INSERT_TAIL(&(list_head), tmp, entries);                      \
          RestoreIRQMask(old_mask);                                            \
       }while(0)

#define CBAM_REMOVE_BUFFER(list_head, buff_ptr)                                \
    do{                                                                        \
        struct ctrl_buff_alloc_entry *entry_iter;                              \
        kal_uint32 old_mask;                                                   \
    	                                                                       \
        old_mask = SaveAndSetIRQMask();                                      \
    	STAILQ_FOREACH(entry_iter, &(list_head), entries)                      \
    	{                                                                      \
    		if(entry_iter->ptr == buff_ptr)                                    \
    		{                                                                  \
    			STAILQ_REMOVE(&(list_head), entry_iter, ctrl_buff_alloc_entry, entries);\
    			entry_iter->used = KAL_FALSE;                                  \
    			break;                                                         \
    		}		                                                           \
    	}                                                                      \
    	RestoreIRQMask(old_mask);                                              \
       }while(0)
#endif

#define CBAM_LIST_PREPARE_SIZE(n) (sizeof(struct ctrl_buff_alloc_entry)*(n))
#define CBAM_LISTHEAD_DECLARE(head) struct ctrl_buf_alloc_head head = STAILQ_HEAD_INITIALIZER(head)
#define CBAM_ENTRIES_DECLARE(lentries, n) struct ctrl_buff_alloc_entry lentries[(n)]

#else  /* else of "DEBUG_KAL && DEBUG_BUF2 && DEBUG_CBAM_GLOBAL" */
#define CBAM_INSERT_BUFFER(list_head, buff_ptr, list_pool, pool_count)
#define CBAM_REMOVE_BUFFER(list_head, buff_ptr)

#define CBAM_LIST_PREPARE_SIZE(n) (0)
#define CBAM_LISTHEAD_DECLARE(head)
#define CBAM_ENTRIES_DECLARE(lentries, n)
#define CBAM_GLOBAL_INSERT_BUFFER(h, b, l, p)
#define CBAM_GLOBAL_REMOVE_BUFFER(h, b)
#define CBAM_GLOBAL_DEFINED(def_expr, undef_expr) undef_expr

#endif /* end of "DEBUG_KAL && DEBUG_BUF2 && DEBUG_CBAM_GLOBAL" */


#endif /* end of __CTRL_BUFF_ALLOC_MONITOR_H__ */

