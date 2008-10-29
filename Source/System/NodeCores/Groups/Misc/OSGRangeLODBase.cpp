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
 **     Do not change this file, changes should be done in the derived      **
 **     class RangeLOD!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGRangeLODBase.h"
#include "OSGRangeLOD.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RangeLOD
    OpenFlight LOD
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Pnt3f           RangeLODBase::_sfCenter
    The center for distance calculation.
*/

/*! \var Real32          RangeLODBase::_sfSwitchIn
    The range intervals.
*/

/*! \var Real32          RangeLODBase::_sfSwitchOut
    The range intervals.
*/


void RangeLODBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "center",
        "The center for distance calculation.\n",
        CenterFieldId, CenterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RangeLOD::editHandleCenter),
        static_cast<FieldGetMethodSig >(&RangeLOD::getHandleCenter));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "switchIn",
        "The range intervals.\n",
        SwitchInFieldId, SwitchInFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RangeLOD::editHandleSwitchIn),
        static_cast<FieldGetMethodSig >(&RangeLOD::getHandleSwitchIn));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "switchOut",
        "The range intervals.\n",
        SwitchOutFieldId, SwitchOutFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RangeLOD::editHandleSwitchOut),
        static_cast<FieldGetMethodSig >(&RangeLOD::getHandleSwitchOut));

    oType.addInitialDesc(pDesc);
}


RangeLODBase::TypeObject RangeLODBase::_type(
    RangeLODBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RangeLODBase::createEmptyLocal),
    RangeLOD::initMethod,
    RangeLOD::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RangeLODBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RangeLOD\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "  OpenFlight LOD\n"
    "\t<Field\n"
    "\t\tname=\"center\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe center for distance calculation.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"switchIn\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe range intervals.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"switchOut\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe range intervals.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "OpenFlight LOD\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RangeLODBase::getType(void)
{
    return _type;
}

const FieldContainerType &RangeLODBase::getType(void) const
{
    return _type;
}

UInt32 RangeLODBase::getContainerSize(void) const
{
    return sizeof(RangeLOD);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *RangeLODBase::editSFCenter(void)
{
    editSField(CenterFieldMask);

    return &_sfCenter;
}

const SFPnt3f *RangeLODBase::getSFCenter(void) const
{
    return &_sfCenter;
}


SFReal32 *RangeLODBase::editSFSwitchIn(void)
{
    editSField(SwitchInFieldMask);

    return &_sfSwitchIn;
}

const SFReal32 *RangeLODBase::getSFSwitchIn(void) const
{
    return &_sfSwitchIn;
}


SFReal32 *RangeLODBase::editSFSwitchOut(void)
{
    editSField(SwitchOutFieldMask);

    return &_sfSwitchOut;
}

const SFReal32 *RangeLODBase::getSFSwitchOut(void) const
{
    return &_sfSwitchOut;
}






/*------------------------------ access -----------------------------------*/

UInt32 RangeLODBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }
    if(FieldBits::NoField != (SwitchInFieldMask & whichField))
    {
        returnValue += _sfSwitchIn.getBinSize();
    }
    if(FieldBits::NoField != (SwitchOutFieldMask & whichField))
    {
        returnValue += _sfSwitchOut.getBinSize();
    }

    return returnValue;
}

void RangeLODBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SwitchInFieldMask & whichField))
    {
        _sfSwitchIn.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SwitchOutFieldMask & whichField))
    {
        _sfSwitchOut.copyToBin(pMem);
    }
}

void RangeLODBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SwitchInFieldMask & whichField))
    {
        _sfSwitchIn.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SwitchOutFieldMask & whichField))
    {
        _sfSwitchOut.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RangeLODTransitPtr RangeLODBase::createLocal(BitVector bFlags)
{
    RangeLODTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RangeLOD>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RangeLODTransitPtr RangeLODBase::create(void)
{
    RangeLODTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RangeLOD>(tmpPtr);
    }

    return fc;
}

RangeLOD *RangeLODBase::createEmptyLocal(BitVector bFlags)
{
    RangeLOD *returnValue;

    newPtr<RangeLOD>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RangeLOD *RangeLODBase::createEmpty(void)
{
    RangeLOD *returnValue;

    newPtr<RangeLOD>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RangeLODBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RangeLOD *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RangeLOD *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RangeLODBase::shallowCopy(void) const
{
    RangeLOD *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RangeLOD *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RangeLODBase::RangeLODBase(void) :
    Inherited(),
    _sfCenter                 (),
    _sfSwitchIn               (),
    _sfSwitchOut              ()
{
}

RangeLODBase::RangeLODBase(const RangeLODBase &source) :
    Inherited(source),
    _sfCenter                 (source._sfCenter                 ),
    _sfSwitchIn               (source._sfSwitchIn               ),
    _sfSwitchOut              (source._sfSwitchOut              )
{
}


/*-------------------------- destructors ----------------------------------*/

RangeLODBase::~RangeLODBase(void)
{
}


GetFieldHandlePtr RangeLODBase::getHandleCenter          (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId)));

    return returnValue;
}

EditFieldHandlePtr RangeLODBase::editHandleCenter         (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfCenter,
             this->getType().getFieldDesc(CenterFieldId)));


    editSField(CenterFieldMask);

    return returnValue;
}

GetFieldHandlePtr RangeLODBase::getHandleSwitchIn        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSwitchIn,
             this->getType().getFieldDesc(SwitchInFieldId)));

    return returnValue;
}

EditFieldHandlePtr RangeLODBase::editHandleSwitchIn       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSwitchIn,
             this->getType().getFieldDesc(SwitchInFieldId)));


    editSField(SwitchInFieldMask);

    return returnValue;
}

GetFieldHandlePtr RangeLODBase::getHandleSwitchOut       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSwitchOut,
             this->getType().getFieldDesc(SwitchOutFieldId)));

    return returnValue;
}

EditFieldHandlePtr RangeLODBase::editHandleSwitchOut      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSwitchOut,
             this->getType().getFieldDesc(SwitchOutFieldId)));


    editSField(SwitchOutFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RangeLODBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<RangeLODBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RangeLODBase::createAspectCopy(void) const
{
    RangeLOD *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RangeLOD *>(this));

    return returnValue;
}
#endif

void RangeLODBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RangeLOD *>::_type("RangeLODPtr", "GroupPtr");
#endif


OSG_END_NAMESPACE