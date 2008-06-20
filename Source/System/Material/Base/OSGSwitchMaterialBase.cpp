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
 **     class SwitchMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESWITCHMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Materials Class

#include "OSGSwitchMaterialBase.h"
#include "OSGSwitchMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SwitchMaterial
    Material that allows selection of one of the materials in the _mfMaterials
    field based on the value of the _sfChoice field.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Material *      SwitchMaterialBase::_mfMaterials
    Materials to choose from.
*/

/*! \var UInt32          SwitchMaterialBase::_sfChoice
    The material to actually use for drawing.
*/


void SwitchMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecMaterialPtr::Description(
        MFUnrecMaterialPtr::getClassType(),
        "materials",
        "Materials to choose from.\n",
        MaterialsFieldId, MaterialsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SwitchMaterial::editHandleMaterials),
        static_cast<FieldGetMethodSig >(&SwitchMaterial::getHandleMaterials));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "choice",
        "The material to actually use for drawing.\n",
        ChoiceFieldId, ChoiceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SwitchMaterial::editHandleChoice),
        static_cast<FieldGetMethodSig >(&SwitchMaterial::getHandleChoice));

    oType.addInitialDesc(pDesc);
}


SwitchMaterialBase::TypeObject SwitchMaterialBase::_type(
    SwitchMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SwitchMaterialBase::createEmptyLocal),
    SwitchMaterial::initMethod,
    SwitchMaterial::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SwitchMaterialBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SwitchMaterial\"\n"
    "\tparent=\"Material\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "Material that allows selection of one of the materials in the _mfMaterials\n"
    "field based on the value of the _sfChoice field.\n"
    "\t<Field\n"
    "\t\tname=\"materials\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMaterials to choose from.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"choice\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe material to actually use for drawing.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Material that allows selection of one of the materials in the _mfMaterials\n"
    "field based on the value of the _sfChoice field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SwitchMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &SwitchMaterialBase::getType(void) const
{
    return _type;
}

UInt32 SwitchMaterialBase::getContainerSize(void) const
{
    return sizeof(SwitchMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SwitchMaterial::_mfMaterials field.
const MFUnrecMaterialPtr *SwitchMaterialBase::getMFMaterials(void) const
{
    return &_mfMaterials;
}

MFUnrecMaterialPtr  *SwitchMaterialBase::editMFMaterials      (void)
{
    editMField(MaterialsFieldMask, _mfMaterials);

    return &_mfMaterials;
}

SFUInt32 *SwitchMaterialBase::editSFChoice(void)
{
    editSField(ChoiceFieldMask);

    return &_sfChoice;
}

const SFUInt32 *SwitchMaterialBase::getSFChoice(void) const
{
    return &_sfChoice;
}




void SwitchMaterialBase::pushToMaterials(Material * const value)
{
    editMField(MaterialsFieldMask, _mfMaterials);

    _mfMaterials.push_back(value);
}

void SwitchMaterialBase::assignMaterials(const MFUnrecMaterialPtr &value)
{
    MFUnrecMaterialPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecMaterialPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<SwitchMaterial *>(this)->clearMaterials();

    while(elemIt != elemEnd)
    {
        this->pushToMaterials(*elemIt);

        ++elemIt;
    }
}

void SwitchMaterialBase::removeFromMaterials(UInt32 uiIndex)
{
    if(uiIndex < _mfMaterials.size())
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        _mfMaterials.erase(uiIndex);
    }
}

void SwitchMaterialBase::removeObjFromMaterials(Material * const value)
{
    Int32 iElemIdx = _mfMaterials.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        _mfMaterials.erase(iElemIdx);
    }
}
void SwitchMaterialBase::clearMaterials(void)
{
    editMField(MaterialsFieldMask, _mfMaterials);


    _mfMaterials.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 SwitchMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        returnValue += _mfMaterials.getBinSize();
    }
    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        returnValue += _sfChoice.getBinSize();
    }

    return returnValue;
}

void SwitchMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyToBin(pMem);
    }
}

void SwitchMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SwitchMaterialTransitPtr SwitchMaterialBase::createLocal(BitVector bFlags)
{
    SwitchMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SwitchMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SwitchMaterialTransitPtr SwitchMaterialBase::create(void)
{
    SwitchMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SwitchMaterial>(tmpPtr);
    }

    return fc;
}

SwitchMaterial *SwitchMaterialBase::createEmptyLocal(BitVector bFlags)
{
    SwitchMaterial *returnValue;

    newPtr<SwitchMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SwitchMaterial *SwitchMaterialBase::createEmpty(void)
{
    SwitchMaterial *returnValue;

    newPtr<SwitchMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SwitchMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SwitchMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SwitchMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SwitchMaterialBase::shallowCopy(void) const
{
    SwitchMaterial *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SwitchMaterial *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SwitchMaterialBase::SwitchMaterialBase(void) :
    Inherited(),
    _mfMaterials              (),
    _sfChoice                 ()
{
}

SwitchMaterialBase::SwitchMaterialBase(const SwitchMaterialBase &source) :
    Inherited(source),
    _mfMaterials              (),
    _sfChoice                 (source._sfChoice                 )
{
}


/*-------------------------- destructors ----------------------------------*/

SwitchMaterialBase::~SwitchMaterialBase(void)
{
}

void SwitchMaterialBase::onCreate(const SwitchMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SwitchMaterial *pThis = static_cast<SwitchMaterial *>(this);

        MFUnrecMaterialPtr::const_iterator MaterialsIt  =
            source->_mfMaterials.begin();
        MFUnrecMaterialPtr::const_iterator MaterialsEnd =
            source->_mfMaterials.end  ();

        while(MaterialsIt != MaterialsEnd)
        {
            pThis->pushToMaterials(*MaterialsIt);

            ++MaterialsIt;
        }
    }
}

GetFieldHandlePtr SwitchMaterialBase::getHandleMaterials       (void) const
{
    MFUnrecMaterialPtr::GetHandlePtr returnValue(
        new  MFUnrecMaterialPtr::GetHandle(
             &_mfMaterials,
             this->getType().getFieldDesc(MaterialsFieldId)));

    return returnValue;
}

EditFieldHandlePtr SwitchMaterialBase::editHandleMaterials      (void)
{
    MFUnrecMaterialPtr::EditHandlePtr returnValue(
        new  MFUnrecMaterialPtr::EditHandle(
             &_mfMaterials,
             this->getType().getFieldDesc(MaterialsFieldId)));

    returnValue->setAddMethod(
        boost::bind(&SwitchMaterial::pushToMaterials,
                    static_cast<SwitchMaterial *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&SwitchMaterial::removeFromMaterials,
                    static_cast<SwitchMaterial *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&SwitchMaterial::removeObjFromMaterials,
                    static_cast<SwitchMaterial *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&SwitchMaterial::clearMaterials,
                    static_cast<SwitchMaterial *>(this)));

    editMField(MaterialsFieldMask, _mfMaterials);

    return returnValue;
}

GetFieldHandlePtr SwitchMaterialBase::getHandleChoice          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfChoice,
             this->getType().getFieldDesc(ChoiceFieldId)));

    return returnValue;
}

EditFieldHandlePtr SwitchMaterialBase::editHandleChoice         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfChoice,
             this->getType().getFieldDesc(ChoiceFieldId)));


    editSField(ChoiceFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SwitchMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SwitchMaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SwitchMaterialBase::createAspectCopy(void) const
{
    SwitchMaterial *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SwitchMaterial *>(this));

    return returnValue;
}
#endif

void SwitchMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SwitchMaterial *>(this)->clearMaterials();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SwitchMaterial *>::_type("SwitchMaterialPtr", "MaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SwitchMaterial *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SwitchMaterial *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SwitchMaterial *,
                           0);

OSG_END_NAMESPACE
