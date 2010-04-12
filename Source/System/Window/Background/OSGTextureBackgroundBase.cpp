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
 **     class TextureBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGTextureBaseChunk.h"        // Texture Class

#include "OSGTextureBackgroundBase.h"
#include "OSGTextureBackground.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureBackground
    \ingroup GrpSystemWindowBackgrounds

    A textured background e.g for distortion corrected fast live video from a
    camera with known intrinsic parameters.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color4f         TextureBackgroundBase::_sfColor
    
*/

/*! \var TextureBaseChunk * TextureBackgroundBase::_sfTexture
    
*/

/*! \var Pnt2f           TextureBackgroundBase::_mfTexCoords
    
*/

/*! \var Real32          TextureBackgroundBase::_sfRadialDistortion
    
*/

/*! \var Vec2f           TextureBackgroundBase::_sfCenterOfDistortion
    
*/

/*! \var UInt16          TextureBackgroundBase::_sfHor
    Horizontal subdivision.
*/

/*! \var UInt16          TextureBackgroundBase::_sfVert
    Vertical subdivision.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureBackground *>::_type("TextureBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureBackground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextureBackground *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextureBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "color",
        "",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleColor),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureBaseChunkPtr::Description(
        SFUnrecTextureBaseChunkPtr::getClassType(),
        "texture",
        "",
        TextureFieldId, TextureFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleTexture),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleTexture));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "texCoords",
        "",
        TexCoordsFieldId, TexCoordsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleTexCoords),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleTexCoords));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "radialDistortion",
        "",
        RadialDistortionFieldId, RadialDistortionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleRadialDistortion),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleRadialDistortion));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "centerOfDistortion",
        "",
        CenterOfDistortionFieldId, CenterOfDistortionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleCenterOfDistortion),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleCenterOfDistortion));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "hor",
        "Horizontal subdivision.\n",
        HorFieldId, HorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleHor),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleHor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "vert",
        "Vertical subdivision.\n",
        VertFieldId, VertFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextureBackground::editHandleVert),
        static_cast<FieldGetMethodSig >(&TextureBackground::getHandleVert));

    oType.addInitialDesc(pDesc);
}


TextureBackgroundBase::TypeObject TextureBackgroundBase::_type(
    TextureBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextureBackgroundBase::createEmptyLocal),
    TextureBackground::initMethod,
    TextureBackground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextureBackground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A textured background e.g for distortion corrected fast live video from a\n"
    "camera with known intrinsic parameters.\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.f, 1.f, 1.f, 0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texture\"\n"
    "\t\ttype=\"TextureBaseChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texCoords\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"radialDistortion\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"centerOfDistortion\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5, 0.5\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hor\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"2\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tHorizontal subdivision.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"vert\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"2\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tVertical subdivision.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A textured background e.g for distortion corrected fast live video from a\n"
    "camera with known intrinsic parameters.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 TextureBackgroundBase::getContainerSize(void) const
{
    return sizeof(TextureBackground);
}

/*------------------------- decorator get ------------------------------*/


SFColor4f *TextureBackgroundBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *TextureBackgroundBase::getSFColor(void) const
{
    return &_sfColor;
}


//! Get the TextureBackground::_sfTexture field.
const SFUnrecTextureBaseChunkPtr *TextureBackgroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

SFUnrecTextureBaseChunkPtr *TextureBackgroundBase::editSFTexture        (void)
{
    editSField(TextureFieldMask);

    return &_sfTexture;
}

MFPnt2f *TextureBackgroundBase::editMFTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return &_mfTexCoords;
}

const MFPnt2f *TextureBackgroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}


SFReal32 *TextureBackgroundBase::editSFRadialDistortion(void)
{
    editSField(RadialDistortionFieldMask);

    return &_sfRadialDistortion;
}

const SFReal32 *TextureBackgroundBase::getSFRadialDistortion(void) const
{
    return &_sfRadialDistortion;
}


SFVec2f *TextureBackgroundBase::editSFCenterOfDistortion(void)
{
    editSField(CenterOfDistortionFieldMask);

    return &_sfCenterOfDistortion;
}

const SFVec2f *TextureBackgroundBase::getSFCenterOfDistortion(void) const
{
    return &_sfCenterOfDistortion;
}


SFUInt16 *TextureBackgroundBase::editSFHor(void)
{
    editSField(HorFieldMask);

    return &_sfHor;
}

const SFUInt16 *TextureBackgroundBase::getSFHor(void) const
{
    return &_sfHor;
}


SFUInt16 *TextureBackgroundBase::editSFVert(void)
{
    editSField(VertFieldMask);

    return &_sfVert;
}

const SFUInt16 *TextureBackgroundBase::getSFVert(void) const
{
    return &_sfVert;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextureBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }
    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        returnValue += _sfRadialDistortion.getBinSize();
    }
    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        returnValue += _sfCenterOfDistortion.getBinSize();
    }
    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        returnValue += _sfHor.getBinSize();
    }
    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        returnValue += _sfVert.getBinSize();
    }

    return returnValue;
}

void TextureBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        _sfRadialDistortion.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        _sfCenterOfDistortion.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        _sfHor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        _sfVert.copyToBin(pMem);
    }
}

void TextureBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        _sfRadialDistortion.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        _sfCenterOfDistortion.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        _sfHor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        _sfVert.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureBackgroundTransitPtr TextureBackgroundBase::createLocal(BitVector bFlags)
{
    TextureBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextureBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextureBackgroundTransitPtr TextureBackgroundBase::createDependent(BitVector bFlags)
{
    TextureBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextureBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextureBackgroundTransitPtr TextureBackgroundBase::create(void)
{
    TextureBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextureBackground>(tmpPtr);
    }

    return fc;
}

TextureBackground *TextureBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    TextureBackground *returnValue;

    newPtr<TextureBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextureBackground *TextureBackgroundBase::createEmpty(void)
{
    TextureBackground *returnValue;

    newPtr<TextureBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextureBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextureBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureBackgroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextureBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureBackground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureBackgroundBase::shallowCopy(void) const
{
    TextureBackground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextureBackground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextureBackgroundBase::TextureBackgroundBase(void) :
    Inherited(),
    _sfColor                  (Color4f(1.f, 1.f, 1.f, 0.f)),
    _sfTexture                (NULL),
    _mfTexCoords              (),
    _sfRadialDistortion       (Real32(0)),
    _sfCenterOfDistortion     (Vec2f(0.5, 0.5)),
    _sfHor                    (UInt16(2)),
    _sfVert                   (UInt16(2))
{
}

TextureBackgroundBase::TextureBackgroundBase(const TextureBackgroundBase &source) :
    Inherited(source),
    _sfColor                  (source._sfColor                  ),
    _sfTexture                (NULL),
    _mfTexCoords              (source._mfTexCoords              ),
    _sfRadialDistortion       (source._sfRadialDistortion       ),
    _sfCenterOfDistortion     (source._sfCenterOfDistortion     ),
    _sfHor                    (source._sfHor                    ),
    _sfVert                   (source._sfVert                   )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureBackgroundBase::~TextureBackgroundBase(void)
{
}

void TextureBackgroundBase::onCreate(const TextureBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TextureBackground *pThis = static_cast<TextureBackground *>(this);

        pThis->setTexture(source->getTexture());
    }
}

GetFieldHandlePtr TextureBackgroundBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId),
             this));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBackgroundBase::getHandleTexture         (void) const
{
    SFUnrecTextureBaseChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureBaseChunkPtr::GetHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleTexture        (void)
{
    SFUnrecTextureBaseChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureBaseChunkPtr::EditHandle(
             &_sfTexture,
             this->getType().getFieldDesc(TextureFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TextureBackground::setTexture,
                    static_cast<TextureBackground *>(this), _1));

    editSField(TextureFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBackgroundBase::getHandleTexCoords       (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfTexCoords,
             this->getType().getFieldDesc(TexCoordsFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleTexCoords      (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfTexCoords,
             this->getType().getFieldDesc(TexCoordsFieldId),
             this));


    editMField(TexCoordsFieldMask, _mfTexCoords);

    return returnValue;
}

GetFieldHandlePtr TextureBackgroundBase::getHandleRadialDistortion (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRadialDistortion,
             this->getType().getFieldDesc(RadialDistortionFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleRadialDistortion(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRadialDistortion,
             this->getType().getFieldDesc(RadialDistortionFieldId),
             this));


    editSField(RadialDistortionFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBackgroundBase::getHandleCenterOfDistortion (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfCenterOfDistortion,
             this->getType().getFieldDesc(CenterOfDistortionFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleCenterOfDistortion(void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfCenterOfDistortion,
             this->getType().getFieldDesc(CenterOfDistortionFieldId),
             this));


    editSField(CenterOfDistortionFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBackgroundBase::getHandleHor             (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfHor,
             this->getType().getFieldDesc(HorFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleHor            (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfHor,
             this->getType().getFieldDesc(HorFieldId),
             this));


    editSField(HorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextureBackgroundBase::getHandleVert            (void) const
{
    SFUInt16::GetHandlePtr returnValue(
        new  SFUInt16::GetHandle(
             &_sfVert,
             this->getType().getFieldDesc(VertFieldId),
             const_cast<TextureBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureBackgroundBase::editHandleVert           (void)
{
    SFUInt16::EditHandlePtr returnValue(
        new  SFUInt16::EditHandle(
             &_sfVert,
             this->getType().getFieldDesc(VertFieldId),
             this));


    editSField(VertFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureBackground *pThis = static_cast<TextureBackground *>(this);

    pThis->execSync(static_cast<TextureBackground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextureBackgroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextureBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureBackground *>(pRefAspect),
                  dynamic_cast<const TextureBackground *>(this));

    return returnValue;
}
#endif

void TextureBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextureBackground *>(this)->setTexture(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfTexCoords.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
