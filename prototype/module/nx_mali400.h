/*
 *      Copyright (C) 2012 Nexell Co., All Rights Reserved
 *      Nexell Co. Proprietary & Confidential
 *
 *      NEXELL INFORMS THAT THIS CODE AND INFORMATION IS PROVIDED "AS IS" BASE
 *      AND WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING
 *      BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR
 *	FITNESS
 *      FOR A PARTICULAR PURPOSE.
 *
 *      Module          : MALI400
 *      File            : nx_mali400.h
 *      Description     :
 *      Author          : 
 *      History         : 
 */
#ifndef __NX_MALI400_H__
#define __NX_MALI400_H__

#include "../base/nx_prototype.h"

#ifdef	__cplusplus
extern "C"
{
#endif

//------------------------------------------------------------------------------
/// @defgroup	MALI400
//------------------------------------------------------------------------------
//@{

//--------------------------------------------------------------------------
/// @brief	register map
typedef struct 
{
	volatile U32 REG_CONTROL [0x1000/4];
	volatile U32 REG_L2      [0x1000/4];
	volatile U32 REG_PMU     [0x1000/4];
	volatile U32 REG_MMU_GP  [0x1000/4];
	volatile U32 REG_MMU_PP0 [0x1000/4];
	volatile U32 REG_MMU_PP1 [0x1000/4];
	volatile U32 REG_MMU_PP2 [0x1000/4];
	volatile U32 REG_MMU_PP3 [0x1000/4];

	volatile U32 REG_PP0     [0x2000/4];
	volatile U32 REG_PP1     [0x2000/4];
	volatile U32 REG_PP2     [0x2000/4];
	volatile U32 REG_PP3     [0x2000/4];
} NX_MALI400_RegisterSet;

//------------------------------------------------------------------------------
///	@name	MALI400 Interface
//------------------------------------------------------------------------------
//@{
U32   NX_MALI400_GetTEMP( U32 ModuleIndex );
//@}
	
//------------------------------------------------------------------------------
///	@name	Basic Interface
//------------------------------------------------------------------------------
//@{
CBOOL NX_MALI400_Initialize( void );
U32   NX_MALI400_GetNumberOfModule( void );

U32   NX_MALI400_GetSizeOfRegisterSet( void );
void  NX_MALI400_SetBaseAddress( U32 ModuleIndex, void* BaseAddress );
void*  NX_MALI400_GetBaseAddress( U32 ModuleIndex );
U32   NX_MALI400_GetPhysicalAddress ( U32 ModuleIndex );
CBOOL NX_MALI400_OpenModule( U32 ModuleIndex );
CBOOL NX_MALI400_CloseModule( U32 ModuleIndex );
CBOOL NX_MALI400_CheckBusy( U32 ModuleIndex );
//@}

//------------------------------------------------------------------------------
///	@name	clock Interface
//------------------------------------------------------------------------------
//@{
U32 NX_MALI400_GetClockNumber ( U32 ModuleIndex );
//@}

//------------------------------------------------------------------------------
///	@name	reset Interface
//------------------------------------------------------------------------------
//@{
U32 NX_MALI400_GetResetNumber ( U32 ModuleIndex );
//@}

//------------------------------------------------------------------------------
///	@name	Interrupt Interface
//------------------------------------------------------------------------------
//@{
U32   NX_MALI400_GetInterruptNumber ( U32 ModuleIndex );
//@}


//@}

#ifdef	__cplusplus
}
#endif


#endif // __NX_MALI400_H__
