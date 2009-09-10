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
 **     class PositionInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPositionInterpolatorBase.h"
#include "OSGPositionInterpolator.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PositionInterpolator
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          PositionInterpolatorBase::_sfFraction
    
*/

/*! \var Real32          PositionInterpolatorBase::_mfKey
    
*/

/*! \var Vec3f           PositionInterpolatorBase::_mfKeyValue
    
*/

/*! \var Vec3f           PositionInterpolatorBase::_sfValue
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PositionInterpolator *>::_type("PositionInterpolatorPtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PositionInterpolator *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PositionInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "fraction",
        "",
        FractionFieldId, FractionFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&PositionInterpolator::editHandleFraction),
        static_cast<FieldGetMethodSig >(&PositionInterpolator::getHandleFraction));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "key",
        "",
        KeyFieldId, KeyFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&PositionInterpolator::editHandleKey),
        static_cast<FieldGetMethodSig >(&PositionInterpolator::getHandleKey));

    oType.addInitialDesc(pDesc);

    pDesc = new MFVec3f::Description(
        MFVec3f::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&PositionInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&PositionInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "value",
        "",
        ValueFieldId, ValueFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&PositionInterpolator::editHandleValue),
        static_cast<FieldGetMethodSig >(&PositionInterpolator::getHandleValue));

    oType.addInitialDesc(pDesc);
}


PositionInterpolatorBase::TypeObject PositionInterpolatorBase::_type(
    PositionInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PositionInterpolatorBase::createEmptyLocal),
    PositionInterpolator::initMethod,
    PositionInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PositionInterpolator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"PositionInterpolator\"\n"
    "    parent=\"NodeCore\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"fraction\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"key\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"keyValue\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PositionInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &PositionInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 PositionInterpolatorBase::getContainerSize(void) const
{
    return sizeof(PositionInterpolator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *PositionInterpolatorBase::editSFFraction(void)
{
    editSField(FractionFieldMask);

    return &_sfFraction;
}

const SFReal32 *PositionInterpolatorBase::getSFFraction(void) const
{
    return &_sfFraction;
}


MFReal32 *PositionInterpolatorBase::editMFKey(void)
{
    editMField(KeyFieldMask, _mfKey);

    return &_mfKey;
}

const MFReal32 *PositionInterpolatorBase::getMFKey(void) const
{
    return &_mfKey;
}


MFVec3f *PositionInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFVec3f *PositionInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


SFVec3f *PositionInterpolatorBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFVec3f *PositionInterpolatorBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 PositionInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        returnValue += _sfFraction.getBinSize();
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        returnValue += _mfKey.getBinSize();
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void PositionInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void PositionInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PositionInterpolatorTransitPtr PositionInterpolatorBase::createLocal(BitVector bFlags)
{
    PositionInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PositionInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PositionInterpolatorTransitPtr PositionInterpolatorBase::createDependent(BitVector bFlags)
{
    PositionInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PositionInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PositionInterpolatorTransitPtr PositionInterpolatorBase::create(void)
{
    PositionInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PositionInterpolator>(tmpPtr);
    }

    return fc;
}

PositionInterpolator *PositionInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    PositionInterpolator *returnValue;

    newPtr<PositionInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PositionInterpolator *PositionInterpolatorBase::createEmpty(void)
{
    PositionInterpolator *returnValue;

    newPtr<PositionInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PositionInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PositionInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PositionInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PositionInterpolatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PositionInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PositionInterpolator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PositionInterpolatorBase::shallowCopy(void) const
{
    PositionInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PositionInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PositionInterpolatorBase::PositionInterpolatorBase(void) :
    Inherited(),
    _sfFraction               (Real32(0.f)),
    _mfKey                    (),
    _mfKeyValue               (),
    _sfValue                  ()
{
}

PositionInterpolatorBase::PositionInterpolatorBase(const PositionInterpolatorBase &source) :
    Inherited(source),
    _sfFraction               (source._sfFraction               ),
    _mfKey                    (source._mfKey                    ),
    _mfKeyValue               (source._mfKeyValue               ),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

PositionInterpolatorBase::~PositionInterpolatorBase(void)
{
}


GetFieldHandlePtr PositionInterpolatorBase::getHandleFraction        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId),
             const_cast<PositionInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PositionInterpolatorBase::editHandleFraction       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId),
             this));


    editSField(FractionFieldMask);

    return returnValue;
}

GetFieldHandlePtr PositionInterpolatorBase::getHandleKey             (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId),
             const_cast<PositionInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PositionInterpolatorBase::editHandleKey            (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId),
             this));


    editMField(KeyFieldMask, _mfKey);

    return returnValue;
}

GetFieldHandlePtr PositionInterpolatorBase::getHandleKeyValue        (void) const
{
    MFVec3f::GetHandlePtr returnValue(
        new  MFVec3f::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             const_cast<PositionInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PositionInterpolatorBase::editHandleKeyValue       (void)
{
    MFVec3f::EditHandlePtr returnValue(
        new  MFVec3f::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId),
             this));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr PositionInterpolatorBase::getHandleValue           (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<PositionInterpolatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PositionInterpolatorBase::editHandleValue          (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PositionInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PositionInterpolator *pThis = static_cast<PositionInterpolator *>(this);

    pThis->execSync(static_cast<PositionInterpolator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PositionInterpolatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PositionInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PositionInterpolator *>(pRefAspect),
                  dynamic_cast<const PositionInterpolator *>(this));

    return returnValue;
}
#endif

void PositionInterpolatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKey.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfKeyValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE