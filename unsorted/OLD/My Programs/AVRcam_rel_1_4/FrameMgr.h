#ifndef FRAMEMGR_H
#define FRAMEMGR_H

/*
    Copyright (C) 2004    John Orlando
    
   AVRcam: a small real-time image processing engine.

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public
    License along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

   For more information on the AVRcam, please contact:

   john@jrobot.net

   or go to www.jrobot.net for more details regarding the system.
*/
/***********************************************************
	Module Name: FrameMgr.h
	Module Date: 04/10/2004
	Module Auth: John Orlando
	
	Description: This module provides the external interface
	to the FrameMgr module.
    
    Revision History:
    Date        Rel Ver.    Notes
    4/10/2004      0.1     Module created
    6/30/2004      1.0     Initial release for Circuit Cellar
                           contest.
***********************************************************/

/* Extern Variables */
extern unsigned char testLineCount;
	
	
/* External Function Declarations */
extern void FrameMgr_init(void);
extern void FrameMgr_processLine(void);
extern void FrameMgr_processFrame(void);
extern void FrameMgr_acquireLine(void);
extern void FrameMgr_acquireFrame(void);
extern void FrameMgr_dispatchEvent(unsigned char event);

	
#endif	

