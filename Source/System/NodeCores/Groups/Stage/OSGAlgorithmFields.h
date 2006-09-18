/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGALGORITHMFIELDS_H_
#define _OSGALGORITHMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class Algorithm;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! AlgorithmPtr

typedef PointerFwdBuilder<FieldContainerPtr, 
                          FieldContainerConstPtr,
                          Algorithm>::ObjPtr         AlgorithmPtr;
typedef PointerFwdBuilder<FieldContainerPtr, 
                          FieldContainerConstPtr,
                          Algorithm>::ObjPtrConst    AlgorithmPtrConst;
typedef PointerFwdBuilder<FieldContainerPtr, 
                          FieldContainerConstPtr,
                          Algorithm>::ObjConstPtr    AlgorithmConstPtr;
typedef PointerFwdBuilder<FieldContainerPtr, 
                          FieldContainerConstPtr,
                          Algorithm>::ObjPtrArg      AlgorithmPtrArg;
typedef PointerFwdBuilder<FieldContainerPtr, 
                          FieldContainerConstPtr,
                          Algorithm>::ObjConstPtrArg AlgorithmConstPtrArg;
typedef PointerFwdBuilder<FieldContainerPtr, 
                          FieldContainerConstPtr,
                          Algorithm>::ObjPtrConstArg AlgorithmPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpGroupFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<AlgorithmPtr> : 
    public FieldTraitsTemplateBase<AlgorithmPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<AlgorithmPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_GROUP_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFAlgorithmPtr"; }
    static const char *getMName(void) { return "MFAlgorithmPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<AlgorithmPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldSingle */

typedef SFieldAdaptor<AlgorithmPtr, SFFieldContainerPtr> SFAlgorithmPtr;
#endif

#ifndef OSG_COMPILEALGORITHMINST
OSG_FIELD_DLLEXPORT_DECL1(SField, AlgorithmPtr, OSG_GROUP_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldMulti */

typedef MFieldAdaptor<AlgorithmPtr, MFFieldContainerPtr> MFAlgorithmPtr;
#endif

#ifndef OSG_COMPILEALGORITHMINST
OSG_FIELD_DLLEXPORT_DECL1(MField, AlgorithmPtr, OSG_GROUP_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGALGORITHMFIELDS_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGALGORITHMFIELDS_H_ */
