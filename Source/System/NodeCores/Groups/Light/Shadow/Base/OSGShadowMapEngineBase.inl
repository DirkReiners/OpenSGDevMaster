/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShadowMapEngineBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShadowMapEngineBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShadowMapEngineBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ShadowMapEngine::_sfRenderTarget field.
inline
FrameBufferObjectPtrConst ShadowMapEngineBase::getRenderTarget(void) const
{
    return _sfRenderTarget.getValue();
}

//! Set the value of the ShadowMapEngine::_sfRenderTarget field.
inline
void ShadowMapEngineBase::setRenderTarget(FrameBufferObjectPtrConstArg value)
{
    editSField(RenderTargetFieldMask);

    setRefd(_sfRenderTarget.getValue(), value);

}
//! Get the value of the ShadowMapEngine::_sfWidth field.

inline
Int32 &ShadowMapEngineBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the ShadowMapEngine::_sfWidth field.
inline
const Int32 &ShadowMapEngineBase::getWidth(void) const
{
    return _sfWidth.getValue();
}


//! Set the value of the ShadowMapEngine::_sfWidth field.
inline
void ShadowMapEngineBase::setWidth(const Int32 &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the ShadowMapEngine::_sfHeight field.

inline
Int32 &ShadowMapEngineBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the ShadowMapEngine::_sfHeight field.
inline
const Int32 &ShadowMapEngineBase::getHeight(void) const
{
    return _sfHeight.getValue();
}


//! Set the value of the ShadowMapEngine::_sfHeight field.
inline
void ShadowMapEngineBase::setHeight(const Int32 &value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}
//! Get the value of the ShadowMapEngine::_sfShadowColor field.

inline
Color4f &ShadowMapEngineBase::editShadowColor(void)
{
    editSField(ShadowColorFieldMask);

    return _sfShadowColor.getValue();
}

//! Get the value of the ShadowMapEngine::_sfShadowColor field.
inline
const Color4f &ShadowMapEngineBase::getShadowColor(void) const
{
    return _sfShadowColor.getValue();
}


//! Set the value of the ShadowMapEngine::_sfShadowColor field.
inline
void ShadowMapEngineBase::setShadowColor(const Color4f &value)
{
    editSField(ShadowColorFieldMask);

    _sfShadowColor.setValue(value);
}
//! Get the value of the ShadowMapEngine::_sfOffsetBias field.

inline
Real32 &ShadowMapEngineBase::editOffsetBias(void)
{
    editSField(OffsetBiasFieldMask);

    return _sfOffsetBias.getValue();
}

//! Get the value of the ShadowMapEngine::_sfOffsetBias field.
inline
const Real32 &ShadowMapEngineBase::getOffsetBias(void) const
{
    return _sfOffsetBias.getValue();
}


//! Set the value of the ShadowMapEngine::_sfOffsetBias field.
inline
void ShadowMapEngineBase::setOffsetBias(const Real32 &value)
{
    editSField(OffsetBiasFieldMask);

    _sfOffsetBias.setValue(value);
}
//! Get the value of the ShadowMapEngine::_sfOffsetFactor field.

inline
Real32 &ShadowMapEngineBase::editOffsetFactor(void)
{
    editSField(OffsetFactorFieldMask);

    return _sfOffsetFactor.getValue();
}

//! Get the value of the ShadowMapEngine::_sfOffsetFactor field.
inline
const Real32 &ShadowMapEngineBase::getOffsetFactor(void) const
{
    return _sfOffsetFactor.getValue();
}


//! Set the value of the ShadowMapEngine::_sfOffsetFactor field.
inline
void ShadowMapEngineBase::setOffsetFactor(const Real32 &value)
{
    editSField(OffsetFactorFieldMask);

    _sfOffsetFactor.setValue(value);
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShadowMapEngineBase::execSync(      ShadowMapEngineBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
        _sfRenderTarget.syncWith(pOther->_sfRenderTarget);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
        _sfShadowColor.syncWith(pOther->_sfShadowColor);

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
        _sfOffsetBias.syncWith(pOther->_sfOffsetBias);

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
        _sfOffsetFactor.syncWith(pOther->_sfOffsetFactor);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShadowMapEngineBase::execSync (      ShadowMapEngineBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
        _sfRenderTarget.syncWith(pFrom->_sfRenderTarget);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);

    if(FieldBits::NoField != (ShadowColorFieldMask & whichField))
        _sfShadowColor.syncWith(pFrom->_sfShadowColor);

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
        _sfOffsetBias.syncWith(pFrom->_sfOffsetBias);

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
        _sfOffsetFactor.syncWith(pFrom->_sfOffsetFactor);
}
#endif

#if 0
inline
void ShadowMapEngineBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ShadowMapEngineBase::getClassname(void)
{
    return "ShadowMapEngine";
}

typedef PointerBuilder<ShadowMapEngine>::ObjPtr          ShadowMapEnginePtr;
typedef PointerBuilder<ShadowMapEngine>::ObjPtrConst     ShadowMapEnginePtrConst;
typedef PointerBuilder<ShadowMapEngine>::ObjConstPtr     ShadowMapEngineConstPtr;

typedef PointerBuilder<ShadowMapEngine>::ObjPtrArg       ShadowMapEnginePtrArg;
typedef PointerBuilder<ShadowMapEngine>::ObjConstPtrArg  ShadowMapEngineConstPtrArg;
typedef PointerBuilder<ShadowMapEngine>::ObjPtrConstArg  ShadowMapEnginePtrConstArg;

OSG_END_NAMESPACE

