/*
 * Copyright (C) the Wine project
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef _FIBERS_H_
#define _FIBERS_H_

#include <minwindef.h>

#ifdef __cplusplus
extern "C" {
#endif

WINBASEAPI DWORD WINAPI FlsAlloc(PFLS_CALLBACK_FUNCTION);
WINBASEAPI BOOL  WINAPI FlsFree(DWORD);
WINBASEAPI void *WINAPI FlsGetValue(DWORD);
WINBASEAPI BOOL  WINAPI FlsSetValue(DWORD,void*);
WINBASEAPI BOOL  WINAPI IsThreadAFiber(void);

#ifdef __cplusplus
}
#endif

#endif /* _FIBERS_H_ */
