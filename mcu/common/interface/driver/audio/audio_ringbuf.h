#ifndef __AUD_RINGBUF_H__
#define __AUD_RINGBUF_H__

#include "kal_public_api.h"

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Ring buffer handling
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/


#ifndef RINGBUFFER_T
#define RINGBUFFER_T(elemtype,size) \
   struct \
   { \
      volatile kal_uint32 write; /* must be unsigned */ \
      volatile kal_uint32 read;  /* must be unsigned */ \
      elemtype volatile queue[size]; \
   }

#define RB_SIZE( rb ) \
   ( sizeof( rb.queue ) / sizeof( *rb.queue ) )

#define RB_MASK( rb ) \
   ( RB_SIZE( rb ) - 1 )

#define RB_INIT( rb ) \
   ( rb.read = rb.write = 0 )

#define RB_COUNT( rb ) \
   ( rb.write - rb.read )

#define RB_FULL( rb ) \
   ( RB_COUNT( rb ) >= RB_SIZE( rb ) )

#define RB_EMPTY( rb ) \
   ( rb.write == rb.read )

#define RB_PUT( rb, value ) \
{ \
   ASSERT( !RB_FULL( rb ) ); \
   rb.queue[ rb.write & RB_MASK( rb ) ] = value; \
   ++rb.write; \
}

#define RB_GET( rb, value ) \
{ \
   ASSERT( !RB_EMPTY( rb ) ); \
   value = rb.queue[ rb.read & RB_MASK( rb ) ]; \
   ++rb.read; \
}

#define RB_PEEK( rb, value ) \
{ \
   ASSERT( !RB_EMPTY( rb ) ); \
   value = rb.queue[ rb.read & RB_MASK( rb ) ]; \
}

#define RB_PEEK_THROUGH( rb, idx, value ) \
{ \
   ASSERT( (rb.read+idx) < rb.write ); \
   value = rb.queue[ (rb.read+idx) & RB_MASK( rb ) ]; \
}

#define RB_CONSUME( rb ) \
{ \
   ASSERT( !RB_EMPTY( rb ) ); \
   ++rb.read; \
}

#define RB_UNPUT( rb, value ) \
{ \
   ASSERT( !RB_EMPTY( rb ) ); \
   --rb.write; \
   value = rb.queue[ rb.write & RB_MASK( rb ) ]; \
}

#define RB_UNGET( rb, value ) \
{ \
   ASSERT( !RB_FULL( rb ) ); \
   --rb.read; \
   rb.queue[ rb.read & RB_MASK( rb ) ] = value; \
}
#endif /* RINGBUFFER_T */



#endif //__AUD_RINGBUF_H__

