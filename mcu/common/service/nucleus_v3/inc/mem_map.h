/*************************************************************************
*
*             Copyright Mentor Graphics Corporation 2015
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
*************************************************************************

*************************************************************************
*
* DESCRIPTION
*
*       Internal prototypes, definitions, and data type for the memory
*       mapping
*
************************************************************************/
#ifndef MEM_MAP_H
#define MEM_MAP_H

/* Memory region control block identifier is 'MEMR' */
#define MEM_MAP_ID              0x4D454D52UL

#define MEM_MAP_VALID_OPTIONS   (NU_MEM_READ | NU_MEM_WRITE | NU_MEM_EXEC | NU_SHARE_READ | NU_SHARE_WRITE | NU_SHARE_EXEC | NU_CACHE_INHIBIT | NU_CACHE_WRITE_THROUGH | NU_CACHE_NO_COHERENT)

/* Service routine completion status constants for Memory Region support */
struct MEM_MAP_CB
{
    UNSIGNED        valid;                  /* Valid control block ID code */
    CHAR            name[NU_MAX_NAME];      /* Memory region name */
    UNSIGNED        size;                   /* Size of the region */
    UNSIGNED        attributes;             /* Access, cache, share */
    VOID           *phys_base;              /* Physical base address */
    VOID           *virt_base;              /* Virtual base address, in most cases
                                               this will map to the physical address.
                                               This address only comes into play where
                                               and entire address space MUST be mapped
                                               virtually.  In this case the mem table
                                               for the BSP will dictate the mapping */
};

typedef struct MEM_MAP_CB           MAPPED_MEMORY;

/* Define page size */
#ifdef ESAL_CO_MEM_PAGE_SIZE
#define MEM_MAP_PAGE_SIZE           ESAL_CO_MEM_PAGE_SIZE
#else
#define MEM_MAP_PAGE_SIZE           0
#endif

/* MEM_MAP_EXPAND_SIZE is used to expand the size of a region
   that begins on a page boundary to be integrally divisible
   by the minimum page size. */
#define MEM_MAP_EXPAND_SIZE(size)   (((((UNSIGNED)(size)) + ((UNSIGNED)MEM_MAP_PAGE_SIZE) - 1U)/ \
                                     ((UNSIGNED)MEM_MAP_PAGE_SIZE)) * ((UNSIGNED)MEM_MAP_PAGE_SIZE))

#define MEM_MAP_GET_SIZE_ALIGN(size, alignment) {                                                              \
                                                    size = MEM_MAP_EXPAND_SIZE(size);                          \
                                                    alignment = (UNSIGNED)MEM_MAP_PAGE_SIZE;                   \
                                                }

#endif /* MEM_MAP_H */
