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
 **     class QuadTreeTerrain!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &QuadTreeTerrainBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 QuadTreeTerrainBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 QuadTreeTerrainBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the QuadTreeTerrain::_sfHeightData field.
inline
ImagePtrConst QuadTreeTerrainBase::getHeightData(void) const
{
    return _sfHeightData.getValue();
}

//! Set the value of the QuadTreeTerrain::_sfHeightData field.
inline
void QuadTreeTerrainBase::setHeightData(ImagePtrConstArg value)
{
    editSField(HeightDataFieldMask);

    setRefd(_sfHeightData.getValue(), value);

}
//! Get the value of the QuadTreeTerrain::_sfHeightScale field.

inline
Real32 &QuadTreeTerrainBase::editHeightScale(void)
{
    editSField(HeightScaleFieldMask);

    return _sfHeightScale.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfHeightScale field.
inline
const Real32 &QuadTreeTerrainBase::getHeightScale(void) const
{
    return _sfHeightScale.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getHeightScale(void)
{
    return this->editHeightScale();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfHeightScale field.
inline
void QuadTreeTerrainBase::setHeightScale(const Real32 &value)
{
    editSField(HeightScaleFieldMask);

    _sfHeightScale.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfWidth field.

inline
UInt32 &QuadTreeTerrainBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfWidth field.
inline
const UInt32 &QuadTreeTerrainBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32 &QuadTreeTerrainBase::getWidth(void)
{
    return this->editWidth();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfWidth field.
inline
void QuadTreeTerrainBase::setWidth(const UInt32 &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfLevel field.

inline
UInt32 &QuadTreeTerrainBase::editLevel(void)
{
    editSField(LevelFieldMask);

    return _sfLevel.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfLevel field.
inline
const UInt32 &QuadTreeTerrainBase::getLevel(void) const
{
    return _sfLevel.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32 &QuadTreeTerrainBase::getLevel(void)
{
    return this->editLevel();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfLevel field.
inline
void QuadTreeTerrainBase::setLevel(const UInt32 &value)
{
    editSField(LevelFieldMask);

    _sfLevel.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfDetail field.

inline
Real32 &QuadTreeTerrainBase::editDetail(void)
{
    editSField(DetailFieldMask);

    return _sfDetail.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfDetail field.
inline
const Real32 &QuadTreeTerrainBase::getDetail(void) const
{
    return _sfDetail.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getDetail(void)
{
    return this->editDetail();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfDetail field.
inline
void QuadTreeTerrainBase::setDetail(const Real32 &value)
{
    editSField(DetailFieldMask);

    _sfDetail.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfBorderDetail field.

inline
Int32 &QuadTreeTerrainBase::editBorderDetail(void)
{
    editSField(BorderDetailFieldMask);

    return _sfBorderDetail.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfBorderDetail field.
inline
const Int32 &QuadTreeTerrainBase::getBorderDetail(void) const
{
    return _sfBorderDetail.getValue();
}

#ifdef OSG_1_COMPAT
inline
Int32 &QuadTreeTerrainBase::getBorderDetail(void)
{
    return this->editBorderDetail();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfBorderDetail field.
inline
void QuadTreeTerrainBase::setBorderDetail(const Int32 &value)
{
    editSField(BorderDetailFieldMask);

    _sfBorderDetail.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfVertexSpacing field.

inline
Real32 &QuadTreeTerrainBase::editVertexSpacing(void)
{
    editSField(VertexSpacingFieldMask);

    return _sfVertexSpacing.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfVertexSpacing field.
inline
const Real32 &QuadTreeTerrainBase::getVertexSpacing(void) const
{
    return _sfVertexSpacing.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getVertexSpacing(void)
{
    return this->editVertexSpacing();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfVertexSpacing field.
inline
void QuadTreeTerrainBase::setVertexSpacing(const Real32 &value)
{
    editSField(VertexSpacingFieldMask);

    _sfVertexSpacing.setValue(value);
}

//! Get the value of the QuadTreeTerrain::_sfHeightVertices field.
inline
GeoVectorPropertyPtrConst QuadTreeTerrainBase::getHeightVertices(void) const
{
    return _sfHeightVertices.getValue();
}

//! Set the value of the QuadTreeTerrain::_sfHeightVertices field.
inline
void QuadTreeTerrainBase::setHeightVertices(GeoVectorPropertyPtrConstArg value)
{
    editSField(HeightVerticesFieldMask);

    setRefd(_sfHeightVertices.getValue(), value);

}
//! Get the value of the QuadTreeTerrain::_sfGeoMorphing field.

inline
bool &QuadTreeTerrainBase::editGeoMorphing(void)
{
    editSField(GeoMorphingFieldMask);

    return _sfGeoMorphing.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfGeoMorphing field.
inline
const bool &QuadTreeTerrainBase::getGeoMorphing(void) const
{
    return _sfGeoMorphing.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool &QuadTreeTerrainBase::getGeoMorphing(void)
{
    return this->editGeoMorphing();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfGeoMorphing field.
inline
void QuadTreeTerrainBase::setGeoMorphing(const bool &value)
{
    editSField(GeoMorphingFieldMask);

    _sfGeoMorphing.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfBoundMin field.

inline
Pnt3f &QuadTreeTerrainBase::editBoundMin(void)
{
    editSField(BoundMinFieldMask);

    return _sfBoundMin.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfBoundMin field.
inline
const Pnt3f &QuadTreeTerrainBase::getBoundMin(void) const
{
    return _sfBoundMin.getValue();
}

#ifdef OSG_1_COMPAT
inline
Pnt3f &QuadTreeTerrainBase::getBoundMin(void)
{
    return this->editBoundMin();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfBoundMin field.
inline
void QuadTreeTerrainBase::setBoundMin(const Pnt3f &value)
{
    editSField(BoundMinFieldMask);

    _sfBoundMin.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfBoundMax field.

inline
Pnt3f &QuadTreeTerrainBase::editBoundMax(void)
{
    editSField(BoundMaxFieldMask);

    return _sfBoundMax.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfBoundMax field.
inline
const Pnt3f &QuadTreeTerrainBase::getBoundMax(void) const
{
    return _sfBoundMax.getValue();
}

#ifdef OSG_1_COMPAT
inline
Pnt3f &QuadTreeTerrainBase::getBoundMax(void)
{
    return this->editBoundMax();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfBoundMax field.
inline
void QuadTreeTerrainBase::setBoundMax(const Pnt3f &value)
{
    editSField(BoundMaxFieldMask);

    _sfBoundMax.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfEyePoint field.

inline
Pnt3f &QuadTreeTerrainBase::editEyePoint(void)
{
    editSField(EyePointFieldMask);

    return _sfEyePoint.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfEyePoint field.
inline
const Pnt3f &QuadTreeTerrainBase::getEyePoint(void) const
{
    return _sfEyePoint.getValue();
}

#ifdef OSG_1_COMPAT
inline
Pnt3f &QuadTreeTerrainBase::getEyePoint(void)
{
    return this->editEyePoint();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfEyePoint field.
inline
void QuadTreeTerrainBase::setEyePoint(const Pnt3f &value)
{
    editSField(EyePointFieldMask);

    _sfEyePoint.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfEyeHeight field.

inline
Real32 &QuadTreeTerrainBase::editEyeHeight(void)
{
    editSField(EyeHeightFieldMask);

    return _sfEyeHeight.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfEyeHeight field.
inline
const Real32 &QuadTreeTerrainBase::getEyeHeight(void) const
{
    return _sfEyeHeight.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getEyeHeight(void)
{
    return this->editEyeHeight();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfEyeHeight field.
inline
void QuadTreeTerrainBase::setEyeHeight(const Real32 &value)
{
    editSField(EyeHeightFieldMask);

    _sfEyeHeight.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfEyePointValid field.

inline
bool &QuadTreeTerrainBase::editEyePointValid(void)
{
    editSField(EyePointValidFieldMask);

    return _sfEyePointValid.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfEyePointValid field.
inline
const bool &QuadTreeTerrainBase::getEyePointValid(void) const
{
    return _sfEyePointValid.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool &QuadTreeTerrainBase::getEyePointValid(void)
{
    return this->editEyePointValid();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfEyePointValid field.
inline
void QuadTreeTerrainBase::setEyePointValid(const bool &value)
{
    editSField(EyePointValidFieldMask);

    _sfEyePointValid.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfOriginX field.

inline
Real32 &QuadTreeTerrainBase::editOriginX(void)
{
    editSField(OriginXFieldMask);

    return _sfOriginX.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfOriginX field.
inline
const Real32 &QuadTreeTerrainBase::getOriginX(void) const
{
    return _sfOriginX.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getOriginX(void)
{
    return this->editOriginX();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfOriginX field.
inline
void QuadTreeTerrainBase::setOriginX(const Real32 &value)
{
    editSField(OriginXFieldMask);

    _sfOriginX.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfOriginY field.

inline
Real32 &QuadTreeTerrainBase::editOriginY(void)
{
    editSField(OriginYFieldMask);

    return _sfOriginY.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfOriginY field.
inline
const Real32 &QuadTreeTerrainBase::getOriginY(void) const
{
    return _sfOriginY.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getOriginY(void)
{
    return this->editOriginY();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfOriginY field.
inline
void QuadTreeTerrainBase::setOriginY(const Real32 &value)
{
    editSField(OriginYFieldMask);

    _sfOriginY.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfOriginTexX field.

inline
Real32 &QuadTreeTerrainBase::editOriginTexX(void)
{
    editSField(OriginTexXFieldMask);

    return _sfOriginTexX.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfOriginTexX field.
inline
const Real32 &QuadTreeTerrainBase::getOriginTexX(void) const
{
    return _sfOriginTexX.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getOriginTexX(void)
{
    return this->editOriginTexX();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfOriginTexX field.
inline
void QuadTreeTerrainBase::setOriginTexX(const Real32 &value)
{
    editSField(OriginTexXFieldMask);

    _sfOriginTexX.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfOriginTexY field.

inline
Real32 &QuadTreeTerrainBase::editOriginTexY(void)
{
    editSField(OriginTexYFieldMask);

    return _sfOriginTexY.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfOriginTexY field.
inline
const Real32 &QuadTreeTerrainBase::getOriginTexY(void) const
{
    return _sfOriginTexY.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getOriginTexY(void)
{
    return this->editOriginTexY();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfOriginTexY field.
inline
void QuadTreeTerrainBase::setOriginTexY(const Real32 &value)
{
    editSField(OriginTexYFieldMask);

    _sfOriginTexY.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfTexSpacing field.

inline
Real32 &QuadTreeTerrainBase::editTexSpacing(void)
{
    editSField(TexSpacingFieldMask);

    return _sfTexSpacing.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfTexSpacing field.
inline
const Real32 &QuadTreeTerrainBase::getTexSpacing(void) const
{
    return _sfTexSpacing.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getTexSpacing(void)
{
    return this->editTexSpacing();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfTexSpacing field.
inline
void QuadTreeTerrainBase::setTexSpacing(const Real32 &value)
{
    editSField(TexSpacingFieldMask);

    _sfTexSpacing.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfTexYSpacing field.

inline
Real32 &QuadTreeTerrainBase::editTexYSpacing(void)
{
    editSField(TexYSpacingFieldMask);

    return _sfTexYSpacing.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfTexYSpacing field.
inline
const Real32 &QuadTreeTerrainBase::getTexYSpacing(void) const
{
    return _sfTexYSpacing.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getTexYSpacing(void)
{
    return this->editTexYSpacing();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfTexYSpacing field.
inline
void QuadTreeTerrainBase::setTexYSpacing(const Real32 &value)
{
    editSField(TexYSpacingFieldMask);

    _sfTexYSpacing.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfUpdateTerrain field.

inline
bool &QuadTreeTerrainBase::editUpdateTerrain(void)
{
    editSField(UpdateTerrainFieldMask);

    return _sfUpdateTerrain.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfUpdateTerrain field.
inline
const bool &QuadTreeTerrainBase::getUpdateTerrain(void) const
{
    return _sfUpdateTerrain.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool &QuadTreeTerrainBase::getUpdateTerrain(void)
{
    return this->editUpdateTerrain();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfUpdateTerrain field.
inline
void QuadTreeTerrainBase::setUpdateTerrain(const bool &value)
{
    editSField(UpdateTerrainFieldMask);

    _sfUpdateTerrain.setValue(value);
}
//! Get the value of the QuadTreeTerrain::_sfPerPixelLighting field.

inline
bool &QuadTreeTerrainBase::editPerPixelLighting(void)
{
    editSField(PerPixelLightingFieldMask);

    return _sfPerPixelLighting.getValue();
}

//! Get the value of the QuadTreeTerrain::_sfPerPixelLighting field.
inline
const bool &QuadTreeTerrainBase::getPerPixelLighting(void) const
{
    return _sfPerPixelLighting.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool &QuadTreeTerrainBase::getPerPixelLighting(void)
{
    return this->editPerPixelLighting();
}
#endif

//! Set the value of the QuadTreeTerrain::_sfPerPixelLighting field.
inline
void QuadTreeTerrainBase::setPerPixelLighting(const bool &value)
{
    editSField(PerPixelLightingFieldMask);

    _sfPerPixelLighting.setValue(value);
}

//! Get the value of the \a index element the QuadTreeTerrain::_mfHeightError field.
inline
const Real32 &QuadTreeTerrainBase::getHeightError(const UInt32 index) const
{
    return _mfHeightError[index];
}

inline
Real32 &QuadTreeTerrainBase::editHeightError(const UInt32 index)
{
    editMField(HeightErrorFieldMask, _mfHeightError);

    return _mfHeightError[index];
}

//! Get the QuadTreeTerrain::_mfHeightError field.
inline
MFReal32 &QuadTreeTerrainBase::editHeightError(void)
{
    editMField(HeightErrorFieldMask, _mfHeightError);

    return _mfHeightError;
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getHeightError(const UInt32 index)
{
    return this->editHeightError(index);
}

inline
MFReal32 &QuadTreeTerrainBase::getHeightError(void)
{
    return this->editHeightError();
}

#endif


//! Get the QuadTreeTerrain::_mfHeightError field.
inline
const MFReal32 &QuadTreeTerrainBase::getHeightError(void) const
{
    return _mfHeightError;
}

//! Get the value of the \a index element the QuadTreeTerrain::_mfHeightQuad field.
inline
const Real32 &QuadTreeTerrainBase::getHeightQuad(const UInt32 index) const
{
    return _mfHeightQuad[index];
}

inline
Real32 &QuadTreeTerrainBase::editHeightQuad(const UInt32 index)
{
    editMField(HeightQuadFieldMask, _mfHeightQuad);

    return _mfHeightQuad[index];
}

//! Get the QuadTreeTerrain::_mfHeightQuad field.
inline
MFReal32 &QuadTreeTerrainBase::editHeightQuad(void)
{
    editMField(HeightQuadFieldMask, _mfHeightQuad);

    return _mfHeightQuad;
}

#ifdef OSG_1_COMPAT
inline
Real32 &QuadTreeTerrainBase::getHeightQuad(const UInt32 index)
{
    return this->editHeightQuad(index);
}

inline
MFReal32 &QuadTreeTerrainBase::getHeightQuad(void)
{
    return this->editHeightQuad();
}

#endif


//! Get the QuadTreeTerrain::_mfHeightQuad field.
inline
const MFReal32 &QuadTreeTerrainBase::getHeightQuad(void) const
{
    return _mfHeightQuad;
}

//! create a new instance of the class
inline
QuadTreeTerrainPtr QuadTreeTerrainBase::create(void) 
{
    QuadTreeTerrainPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<QuadTreeTerrain::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void QuadTreeTerrainBase::execSync(      QuadTreeTerrainBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (HeightDataFieldMask & whichField))
        _sfHeightData.syncWith(pOther->_sfHeightData);

    if(FieldBits::NoField != (HeightScaleFieldMask & whichField))
        _sfHeightScale.syncWith(pOther->_sfHeightScale);

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
        _mfHeightError.syncWith(pOther->_mfHeightError, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
        _mfHeightQuad.syncWith(pOther->_mfHeightQuad, 
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pOther->_sfWidth);

    if(FieldBits::NoField != (LevelFieldMask & whichField))
        _sfLevel.syncWith(pOther->_sfLevel);

    if(FieldBits::NoField != (DetailFieldMask & whichField))
        _sfDetail.syncWith(pOther->_sfDetail);

    if(FieldBits::NoField != (BorderDetailFieldMask & whichField))
        _sfBorderDetail.syncWith(pOther->_sfBorderDetail);

    if(FieldBits::NoField != (VertexSpacingFieldMask & whichField))
        _sfVertexSpacing.syncWith(pOther->_sfVertexSpacing);

    if(FieldBits::NoField != (HeightVerticesFieldMask & whichField))
        _sfHeightVertices.syncWith(pOther->_sfHeightVertices);

    if(FieldBits::NoField != (GeoMorphingFieldMask & whichField))
        _sfGeoMorphing.syncWith(pOther->_sfGeoMorphing);

    if(FieldBits::NoField != (BoundMinFieldMask & whichField))
        _sfBoundMin.syncWith(pOther->_sfBoundMin);

    if(FieldBits::NoField != (BoundMaxFieldMask & whichField))
        _sfBoundMax.syncWith(pOther->_sfBoundMax);

    if(FieldBits::NoField != (EyePointFieldMask & whichField))
        _sfEyePoint.syncWith(pOther->_sfEyePoint);

    if(FieldBits::NoField != (EyeHeightFieldMask & whichField))
        _sfEyeHeight.syncWith(pOther->_sfEyeHeight);

    if(FieldBits::NoField != (EyePointValidFieldMask & whichField))
        _sfEyePointValid.syncWith(pOther->_sfEyePointValid);

    if(FieldBits::NoField != (OriginXFieldMask & whichField))
        _sfOriginX.syncWith(pOther->_sfOriginX);

    if(FieldBits::NoField != (OriginYFieldMask & whichField))
        _sfOriginY.syncWith(pOther->_sfOriginY);

    if(FieldBits::NoField != (OriginTexXFieldMask & whichField))
        _sfOriginTexX.syncWith(pOther->_sfOriginTexX);

    if(FieldBits::NoField != (OriginTexYFieldMask & whichField))
        _sfOriginTexY.syncWith(pOther->_sfOriginTexY);

    if(FieldBits::NoField != (TexSpacingFieldMask & whichField))
        _sfTexSpacing.syncWith(pOther->_sfTexSpacing);

    if(FieldBits::NoField != (TexYSpacingFieldMask & whichField))
        _sfTexYSpacing.syncWith(pOther->_sfTexYSpacing);

    if(FieldBits::NoField != (UpdateTerrainFieldMask & whichField))
        _sfUpdateTerrain.syncWith(pOther->_sfUpdateTerrain);

    if(FieldBits::NoField != (PerPixelLightingFieldMask & whichField))
        _sfPerPixelLighting.syncWith(pOther->_sfPerPixelLighting);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void QuadTreeTerrainBase::execSync (      QuadTreeTerrainBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
}
#endif

#if 0
inline
void QuadTreeTerrainBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (HeightErrorFieldMask & whichField))
    {
        _mfHeightError.beginEdit(uiAspect, uiContainerSize);
    }

    if(FieldBits::NoField != (HeightQuadFieldMask & whichField))
    {
        _mfHeightQuad.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *QuadTreeTerrainBase::getClassname(void)
{
    return "QuadTreeTerrain";
}

typedef PointerBuilder<QuadTreeTerrain>::ObjPtr          QuadTreeTerrainPtr;
typedef PointerBuilder<QuadTreeTerrain>::ObjPtrConst     QuadTreeTerrainPtrConst;
typedef PointerBuilder<QuadTreeTerrain>::ObjConstPtr     QuadTreeTerrainConstPtr;

typedef PointerBuilder<QuadTreeTerrain>::ObjPtrArg       QuadTreeTerrainPtrArg;
typedef PointerBuilder<QuadTreeTerrain>::ObjConstPtrArg  QuadTreeTerrainConstPtrArg;
typedef PointerBuilder<QuadTreeTerrain>::ObjPtrConstArg  QuadTreeTerrainPtrConstArg;

OSG_END_NAMESPACE

#define OSGQUADTREETERRAINBASE_INLINE_CVSID "@(#)$Id: $"

