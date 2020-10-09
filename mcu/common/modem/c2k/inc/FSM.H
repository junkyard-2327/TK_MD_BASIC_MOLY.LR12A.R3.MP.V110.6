/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 1999-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*************************************************************************
 *
 * File Name:       fsm.h
 * Project:         ISOLIB C Library
 * Original Author: Dale Ehman
 * Creation Date:   Aug. 26, 1997
 *
 * Description:     Header for Generic FSM C Language implementation.
 *
 * Restrictions:    
 *
 * Dependencies:    
 *
 ****************************************************************************
 ****************************************************************************
 *
 * RCS Log Information
 *
 * $Log: FSM.H $
 *
 * 06 29 2017 sue.zhong
 * [MOLY00259241] [6293][C2K]Replace with KAL data type
 * ::KAL type - folder inc
 *
 * 05 17 2017 peijun.zheng
 * [MOLY00249027] [BIACNO][MT6763][New feature]C2K code release code modification
 * 	
 * 	C2k code release.
 * Revision 1.3  2006/01/11 15:15:19  blee
 * Added new state machine handler
 * Revision 1.2  2004/03/25 12:08:47  fpeng
 * Updated from 6.0 CP 2.5.0
 * Revision 1.1  2003/05/12 15:38:44  fpeng
 * Initial revision
 * Revision 1.7  2003/05/02 14:35:59  sulinlow
 * To add RLP BLOB params received from PS
 * Revision 1.6  2002/06/06 13:12:20  chinh
 * Changed and Added Copyright
 * Revision 1.5  2002/05/30 09:31:36  mshaver
 * The ARM 2.51 tools the compiler supports the alignment options :
 *  -zap1 which specifies that pointers to structs are assumed to be 
 *  aligned on at least <struct minimal alignment> boundaries.
 *  -zat4 which specifies the minimal byte alignment for top-level static
 *   objects, such as global variables is 4 bytes.
 * The ADS compiler does not support either of these alignment 
 * options. The only alignment option it supports is :
 *  -zas which specifies the minimum byte alignment for structures. This option will not be supported in future versions of the ADS 
 * tools.
 * Therefore, to be compatible with both the ARM 2.51 tools and the
 * ADS tools, the PACKED qualifier was removed from the FSM
 * Descriptor Structure.
 * Revision 1.4.1.2  2002/02/11 10:51:02  srodenba
 * remove PACKED designator to make it work with ADS
 * --- Added comments ---  mshaver [2002/05/22 16:20:08Z]
 * For the ARM 2.51 tools the compiler supports the alignment options :
 * -zap1 which specifies that pointers to structs are assumed to be aligned on at least
 * <struct minimal alignment> boundaries.
 * -zat4 which specifies the minimal byte alignment for top-level static objects, such as global
 * variables is 4 bytes.
 * The ADS compiler does not support either of these alignment options. The only alignment
 * option it supports is :
 * -zas which specifies the minimum byte alignment for structures. This option will not be 
 * supported in future versions of the ADS tools.
 * 
 * Therefore, to be compatible with both the ARM 2.51 tools and the ADS tools, the
 * PACKED qualifier was removed from the FSM Descriptor Structure.
 * Revision 1.4.1.1  2002/02/01 11:59:15  srodenba
 * Duplicate revision
 * Revision 1.4  2002/02/01 11:59:15  ameya
 * Moved OTTS related definitions from this file to ottsdefs.h
 * Revision 1.3  2001/10/19 13:54:49  ameya
 * Changed all occurences of _packed to PACKED. Added definition of macro PACKED if undefined.
 * Revision 1.2  2001/06/21 09:42:38  yfang
 * supported RLP3
 * Revision 1.1  2001/01/17 10:58:37  plabarbe
 * Initial revision
 * Revision 1.1  2000/10/24 14:11:13  fpeng
 * Initial revision
 * Revision 1.3  2000/08/24 00:07:10Z  hhong
 * Add #ifndef pair for COND_ST
 * Revision 1.2  2000/05/12 00:53:51Z  hhong
 * Make FSM.h available to all data engines across the board from this spot.
 * Revision 1.20  1999/07/21 21:17:37  msmith
 * Corrected FSMEXTTRACEINFO for TOKEN tracing
 *
 * Revision 1.19  1999/06/26 00:26:03  ddoucett
 * fixed the FSM_EXTTRACEINFO for case when TRACEON is not defined
 *
 * Revision 1.18  1999/06/14 23:06:08  bcassidy
 * Changed to distinguish between token tracing and string tracing
 *
 * Revision 1.17  1999/06/09 23:04:44  msmith
 * Reduced parm_struct size
 *
 * Revision 1.16  1999/06/07 22:50:39  ddoucett
 * increaced the size of the MAX_PARM_STRUCT to 83
 *
 * Revision 1.15  1999/05/13 15:12:57  msmith
 * Added support for tracing when TRACEON defined
 *
 *
 * Revision 1.13  1998/10/06 17:08:13  bcassidy
 * 1. Mods for circular queue operation.
 * 2. Put queue size back to 5.
 *
 * Revision 1.12  1998/10/04 01:39:02  pjiang
 * 1. Bump event Q size.
 *    [Temporary fix until FSM changed to circular Q operation.]
 *
 * Revision 1.11  1998/09/25 20:28:21  bcassidy
 * 1. Mod setFSMTraceInfo proto.
 *
 * Revision 1.10  1998/08/28 14:57:42  bcassidy
 * 1. Mods for multi-engine tracing system.
 *
 * Revision 1.9  1998/07/14 19:24:53  bcassidy
 * 1. Simplify MakeFSMTable maro.
 * 2. Add ROM keyword for constant data.
 *
 * Revision 1.8  1998/05/15 21:28:08  bcassidy
 * 1. Modify tracing system to avoid string fields.
 *
 * Revision 1.7  1998/03/05  17:50:10  bcassidy
 * 1. Add compile switch for conditional state support.
 *
 * Revision 1.6  1998/03/04  01:13:46  dehman
 * Adjusted MAX_PARM_STRUCT_SIZE to 15 so that we get word alignment. (For now)
 *
 * Revision 1.5  1998/02/07  22:07:53  bcassidy
 * 1. Remove current_event and busy elements from FSMDescriptor.
 *    [Efficiency improvement in processEventWithParmStruct.]
 *
 * Revision 1.4  1998/02/07  04:03:44  dehman
 * Fixed structure alignment problem/bug by changing the order
 * of member declaration in FSMTblEvent.
 *
 * Revision 1.3  1998/02/04  01:08:12  bcassidy
 * 1. Fix const keywords for FSM name, event_name and state_name.
 *
 * Revision 1.2  1998/02/03  22:23:47  bcassidy
 * 1. Add tracing support.
 *
 * Revision 1.1  1998/01/31  22:37:35  bcassidy
 * Initial revision
 *
 *
 ************************************************************************/

#ifndef __FSM_H_
#define __FSM_H_

#include "ottsdefs.h"
#include "sysdefs.h"




/* Constants */
/* <TBD: Due to a GNU compiler-bug, the MAX_PARM_STRUCT_SIZE must be set
         to: ((a multiple of 4) - 1).> */
#define MAX_PARM_STRUCT_SIZE 39

#define EVENTQ_SIZE           5

#define UNEXPECTED_EVENT_AC  0xFE
#define NO_EVENT             0xFF
#define NO_ACTION            0

#ifndef FSM_COND_ST
#define FSM_COND_ST          1
#endif

#ifdef FSM_COND_ST
#define CONDITIONAL_STATE    0x7F
#define CHANGE_STATE_ALWAYS  KAL_TRUE
#define ACTION_DRIVES_CHANGE KAL_FALSE
#endif

/* Define FSM Base Elements */
typedef kal_uint8 FSMState;
typedef kal_uint8 FSMEvent;
typedef kal_uint8 FSMAction; 

/* <TBD: Due to a GNU compiler-bug, 'plist' must be the first entry in this structure.> */
typedef struct 
{
  kal_uint8 plist[ MAX_PARM_STRUCT_SIZE ];
  FSMEvent  event;
} FSMTBLEvent;

typedef kal_uint8 ProtocolEngineID;

/* Define FSM Descriptor Structure */

struct FSMDescriptorStruct
{
  FSMTBLEvent eventQ[EVENTQ_SIZE]; /* Event Queue        */
  kal_uint8   put_index;           /* Put Index for Q    */
  kal_uint8   get_index;           /* Get Index for Q    */
  kal_uint8   num_in_queue;        /* Current number of entries in the queue */

  FSMState  state;                 /* Current State      */

#ifdef FSM_COND_ST
  FSMState  conditional_state;     /* Conditional State  */
  kal_bool  change_flag;           /* If TRUE, always change state */
#endif

  FSMState  num_state;             /* Number of States   */
  FSMEvent  num_event;             /* Number of Events   */
  FSMAction num_action;            /* Number of Actions  */

  FSMState*   state_table;         /* State Table        */
  kal_uint16  state_size;          /* State Entry Size   */
  kal_uint16  event_size;          /* Event Entry Size   */

  /* Ptr to Action Handler Function */
  kal_bool ( *action_handler )( struct FSMDescriptorStruct* fsm, FSMAction action );

  /* Instance Related User Parameters */
  void*       user_parms;

  kal_uint8   id;
  ProtocolEngineID engineId;
  kal_bool    extendedTracing;

#if (ITRACE_TYPE == TOKEN_TRACING)
  kal_uint8   fsmNameTableId;
  kal_uint8   stateNameTableId;
  kal_uint8   eventNameTableId;

#else   /* !TOKEN_TRACING */
  const kal_char** fsmNameTable;
  const kal_char** stateNameTable;
  const kal_char** eventNameTable;
#endif  /* ITRACE_TYPE */
};

/* Useful Typedefs */
typedef struct FSMDescriptorStruct FSMDescriptor;
typedef FSMDescriptor* FSMPtr;
typedef kal_bool (*FSMActionFuncPtr) (FSMPtr fsm, FSMAction action);


/* Generic FSM Processing Functions */
void initializeFSM( FSMPtr fsm, FSMState* table,
                    kal_uint8 num_state, kal_uint8 num_event, kal_uint8 num_action,
                    FSMState initial_state, FSMActionFuncPtr action_handler, 
                    void* user_parms );

void processEventWithNoParms( FSMPtr fsm, FSMEvent event );
void processEventWithParmStruct( FSMPtr fsm, FSMEvent event, void* parm_struct, kal_uint8 size );

#ifdef FSM_COND_ST
void setConditionalState( FSMPtr fsm, FSMState cond_state );
void setChangeFlag( FSMPtr fsm, kal_bool change_always );
#endif

/* Event Parameter Query */
void* getEventParameters( FSMPtr fsm );
FSMEvent getCurrentEvent( FSMPtr fsm );

/* FSM Table Generation Macros */

/* The macro MAKEFSMTable creates a FSM table, just provide the name of the
 * table, the number of states, the number of events and the number of
 * actions that are to be executed to get to that state.
 */

/*
 * Example of make fsm table macro
 * Intialize table
 * MAKEFSMTable(callFSM,2,3,1) = {{1,b},{2,c},{3,d},{4,e},{5,f},{0,a}};
 *    where 0-5 represent the different states
 *    where a-e represent different actions
 * Note this assumes that the states and actions are the same size 
 * The + 1 is for the state entry
 */
#define MAKEFSMTable(tableName,numStates,numEvents,numActions) \
static CONST kal_uint8 ROM tableName[numStates][numEvents][numActions + 1]


/* The macro FSMTable is used to Instantiate a FSMTable
 * It just does the required type casting
 *
 * Example
 * Instantiate a FSMTBL with FSMTable callFSM
 * FSMTBL callFSMTable(FSMTable(callFSM),2,3,1,0);
 */
#define FSMTable(tableName) (FSMState*)&tableName

#ifdef TRACEON
void setFSMTraceInfo (FSMPtr fsm, kal_uint8 fsmId, ProtocolEngineID engineId);

#define FSMTRACE_INFO(fsm, id, engineId) setFSMTraceInfo(fsm, id, engineId)

#if (ITRACE_TYPE == TOKEN_TRACING)
void setFSMExtendedTraceInfo (FSMPtr fsm, kal_uint8 fsmNameTableId, kal_uint8 fsmId,
                              ProtocolEngineID engineId,
                              kal_uint8 stateTableId, kal_uint8 eventTableId);

#define FSMEXTTRACE_INFO(fsm, engineId, fsmNameTable, fsmNameTableId, fsmId, \
                         stateNameTable, stateNameTableId, \
                         eventNameTable, eventNameTableId) \
   setFSMExtendedTraceInfo(fsm, fsmNameTableId, fsmId, engineId, \
                           stateNameTableId, eventNameTableId)

#else   /* !TOKEN_TRACING */
void setFSMExtendedTraceInfo (FSMPtr fsm, const kal_char* fsmNameTable[],
                              kal_uint8 fsmId, ProtocolEngineID engineId,
                              const kal_char* stateTable[],
                              const kal_char* eventTable[]);

#define FSMEXTTRACE_INFO(fsm, engineId, fsmNameTable, fsmNameTableId, fsmId, \
                         stateNameTable, stateNameTableId, \
                         eventNameTable, eventNameTableId) \
   setFSMExtendedTraceInfo(fsm, fsmNameTable, fsmId, engineId, \
                           stateNameTable, eventNameTable)
#endif  /* ITRACE_TYPE */ 

#else   /* !TRACEON */
#define FSMTRACE_INFO(fsm, id, engineId)
#define FSMEXTTRACE_INFO(fsm, engineId, fsmNameTable, fsmNameTableId, fsmId, \
                         stateNameTable, stateNameTableId, \
                         eventNameTable, eventNameTableId) 
#endif  /* TRACEON */






#endif  /* __FSM_H_ */
