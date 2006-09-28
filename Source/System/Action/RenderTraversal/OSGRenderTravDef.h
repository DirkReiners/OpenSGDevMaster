/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                 Copyright (C) 2000 by the OpenSG Forum                    *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGRENDERTRAVERSALACTIONDEF_H_
#define _OSGRENDERTRAVERSALACTIONDEF_H_
#ifdef __sgi
#pragma once
#endif

//---------------------------------------------------------------------------
//  Defines
//---------------------------------------------------------------------------

#if defined(WIN32)
#   if defined(OSG_COMPILERENDERTRAVLIB) || defined(OSG_COMPILERENDERTRAVERSALLIB)
#       define OSG_RENDERTRAV_DLLMAPPING  __declspec(dllexport)
#       define OSG_RENDERTRAV_EXPIMP_TMPL 
#   else
#       define OSG_RENDERTRAV_DLLMAPPING  __declspec(dllimport)
#       define OSG_RENDERTRAV_EXPIMP_TMPL   extern
#   endif
#else
#define OSG_RENDERTRAV_DLLMAPPING
#define OSG_RENDERTRAV_EXPIMP_TMPL
#endif

#endif /* _OSGRENDERTRAVERSALDEF_H_ */
