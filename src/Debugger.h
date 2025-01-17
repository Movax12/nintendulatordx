/* Nintendulator - Win32 NES emulator written in C++
 * Copyright (C) 2002-2011 QMT Productions
 *
 * $URL$
 * $Id$
 */

#pragma once

#ifdef	ENABLE_DEBUGGER

#define DEBUG_MODE_CPU	1
#define DEBUG_MODE_PPU	2

#define DEBUG_TRACELINES 13
#define DEBUG_MEMLINES 8

#define	DEBUG_BREAK_EXEC	0x01
#define	DEBUG_BREAK_READ	0x02
#define	DEBUG_BREAK_WRITE	0x04
#define	DEBUG_BREAK_OPCODE	0x08
#define	DEBUG_BREAK_NMI		0x10
#define	DEBUG_BREAK_IRQ		0x20
#define	DEBUG_BREAK_BRK		0x40
#define NDX_DEBUG_BREAK		0x80
/* #define	DEBUG_BREAK_RST		0x80	/* unused */

#define	DEBUG_DETAIL_NONE	0
#define	DEBUG_DETAIL_NAMETABLE	1
#define	DEBUG_DETAIL_SPRITE	2
#define	DEBUG_DETAIL_PATTERN	3
#define	DEBUG_DETAIL_PALETTE	4

namespace Debugger
{
extern BOOL	Enabled;
extern int	Mode;
extern int CPUWndPosX;
extern int CPUWndPosY;
extern HWND	CPUWnd;

extern BOOL	NTabChanged, PalChanged, PatChanged, SprChanged;

extern BOOL	Step;

int 	CheckForBreakPoint();
void	AddExternalBreakPoint(int type, int opcode, int enabled, int addr_start, int addr_end);
void	Init (void);
void	Destroy (void);
void	SetMode(int NewMode);
void	Update (int UpdateMode);
void	AddInst (void);
unsigned char	DebugMemCPU (unsigned short Addr);
unsigned short  DebugMemCPUEx (unsigned short Addr);
} // namespace Debugger
#endif	/* !ENABLE_DEBUGGER */
