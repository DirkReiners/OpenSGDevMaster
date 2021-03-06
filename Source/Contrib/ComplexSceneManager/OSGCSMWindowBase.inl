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
 **     class CSMWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CSMWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CSMWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CSMWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CSMWindow::_sfMouseData field.

inline
MouseData &CSMWindowBase::editMouseData(void)
{
    editSField(MouseDataFieldMask);

    return _sfMouseData.getValue();
}

//! Get the value of the CSMWindow::_sfMouseData field.
inline
const MouseData &CSMWindowBase::getMouseData(void) const
{
    return _sfMouseData.getValue();
}

//! Set the value of the CSMWindow::_sfMouseData field.
inline
void CSMWindowBase::setMouseData(const MouseData &value)
{
    editSField(MouseDataFieldMask);

    _sfMouseData.setValue(value);
}
//! Get the value of the CSMWindow::_sfSize field.

inline
Vec2f &CSMWindowBase::editSize(void)
{
    editSField(SizeFieldMask);

    return _sfSize.getValue();
}

//! Get the value of the CSMWindow::_sfSize field.
inline
const Vec2f &CSMWindowBase::getSize(void) const
{
    return _sfSize.getValue();
}

//! Set the value of the CSMWindow::_sfSize field.
inline
void CSMWindowBase::setSize(const Vec2f &value)
{
    editSField(SizeFieldMask);

    _sfSize.setValue(value);
}
//! Get the value of the CSMWindow::_sfPosition field.

inline
Vec2f &CSMWindowBase::editPosition(void)
{
    editSField(PositionFieldMask);

    return _sfPosition.getValue();
}

//! Get the value of the CSMWindow::_sfPosition field.
inline
const Vec2f &CSMWindowBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the CSMWindow::_sfPosition field.
inline
void CSMWindowBase::setPosition(const Vec2f &value)
{
    editSField(PositionFieldMask);

    _sfPosition.setValue(value);
}
//! Get the value of the CSMWindow::_sfDecorEnabled field.

inline
bool &CSMWindowBase::editDecorEnabled(void)
{
    editSField(DecorEnabledFieldMask);

    return _sfDecorEnabled.getValue();
}

//! Get the value of the CSMWindow::_sfDecorEnabled field.
inline
      bool  CSMWindowBase::getDecorEnabled(void) const
{
    return _sfDecorEnabled.getValue();
}

//! Set the value of the CSMWindow::_sfDecorEnabled field.
inline
void CSMWindowBase::setDecorEnabled(const bool value)
{
    editSField(DecorEnabledFieldMask);

    _sfDecorEnabled.setValue(value);
}
//! Get the value of the CSMWindow::_sfRequestMajor field.

inline
Int32 &CSMWindowBase::editRequestMajor(void)
{
    editSField(RequestMajorFieldMask);

    return _sfRequestMajor.getValue();
}

//! Get the value of the CSMWindow::_sfRequestMajor field.
inline
      Int32  CSMWindowBase::getRequestMajor(void) const
{
    return _sfRequestMajor.getValue();
}

//! Set the value of the CSMWindow::_sfRequestMajor field.
inline
void CSMWindowBase::setRequestMajor(const Int32 value)
{
    editSField(RequestMajorFieldMask);

    _sfRequestMajor.setValue(value);
}
//! Get the value of the CSMWindow::_sfRequestMinor field.

inline
Int32 &CSMWindowBase::editRequestMinor(void)
{
    editSField(RequestMinorFieldMask);

    return _sfRequestMinor.getValue();
}

//! Get the value of the CSMWindow::_sfRequestMinor field.
inline
      Int32  CSMWindowBase::getRequestMinor(void) const
{
    return _sfRequestMinor.getValue();
}

//! Set the value of the CSMWindow::_sfRequestMinor field.
inline
void CSMWindowBase::setRequestMinor(const Int32 value)
{
    editSField(RequestMinorFieldMask);

    _sfRequestMinor.setValue(value);
}
//! Get the value of the CSMWindow::_sfEnableForwardCompatContext field.

inline
bool &CSMWindowBase::editEnableForwardCompatContext(void)
{
    editSField(EnableForwardCompatContextFieldMask);

    return _sfEnableForwardCompatContext.getValue();
}

//! Get the value of the CSMWindow::_sfEnableForwardCompatContext field.
inline
      bool  CSMWindowBase::getEnableForwardCompatContext(void) const
{
    return _sfEnableForwardCompatContext.getValue();
}

//! Set the value of the CSMWindow::_sfEnableForwardCompatContext field.
inline
void CSMWindowBase::setEnableForwardCompatContext(const bool value)
{
    editSField(EnableForwardCompatContextFieldMask);

    _sfEnableForwardCompatContext.setValue(value);
}
//! Get the value of the CSMWindow::_sfEnableDebugContext field.

inline
bool &CSMWindowBase::editEnableDebugContext(void)
{
    editSField(EnableDebugContextFieldMask);

    return _sfEnableDebugContext.getValue();
}

//! Get the value of the CSMWindow::_sfEnableDebugContext field.
inline
      bool  CSMWindowBase::getEnableDebugContext(void) const
{
    return _sfEnableDebugContext.getValue();
}

//! Set the value of the CSMWindow::_sfEnableDebugContext field.
inline
void CSMWindowBase::setEnableDebugContext(const bool value)
{
    editSField(EnableDebugContextFieldMask);

    _sfEnableDebugContext.setValue(value);
}
//! Get the value of the CSMWindow::_sfRequestSamples field.

inline
UInt32 &CSMWindowBase::editRequestSamples(void)
{
    editSField(RequestSamplesFieldMask);

    return _sfRequestSamples.getValue();
}

//! Get the value of the CSMWindow::_sfRequestSamples field.
inline
      UInt32  CSMWindowBase::getRequestSamples(void) const
{
    return _sfRequestSamples.getValue();
}

//! Set the value of the CSMWindow::_sfRequestSamples field.
inline
void CSMWindowBase::setRequestSamples(const UInt32 value)
{
    editSField(RequestSamplesFieldMask);

    _sfRequestSamples.setValue(value);
}
//! Get the value of the CSMWindow::_sfEnableFSAA field.

inline
bool &CSMWindowBase::editEnableFSAA(void)
{
    editSField(EnableFSAAFieldMask);

    return _sfEnableFSAA.getValue();
}

//! Get the value of the CSMWindow::_sfEnableFSAA field.
inline
      bool  CSMWindowBase::getEnableFSAA(void) const
{
    return _sfEnableFSAA.getValue();
}

//! Set the value of the CSMWindow::_sfEnableFSAA field.
inline
void CSMWindowBase::setEnableFSAA(const bool value)
{
    editSField(EnableFSAAFieldMask);

    _sfEnableFSAA.setValue(value);
}
//! Get the value of the CSMWindow::_sfFsaaHint field.

inline
UInt32 &CSMWindowBase::editFsaaHint(void)
{
    editSField(FsaaHintFieldMask);

    return _sfFsaaHint.getValue();
}

//! Get the value of the CSMWindow::_sfFsaaHint field.
inline
      UInt32  CSMWindowBase::getFsaaHint(void) const
{
    return _sfFsaaHint.getValue();
}

//! Set the value of the CSMWindow::_sfFsaaHint field.
inline
void CSMWindowBase::setFsaaHint(const UInt32 value)
{
    editSField(FsaaHintFieldMask);

    _sfFsaaHint.setValue(value);
}

//! Get the value of the CSMWindow::_sfRenderOptions field.
inline
RenderOptions * CSMWindowBase::getRenderOptions(void) const
{
    return _sfRenderOptions.getValue();
}

//! Set the value of the CSMWindow::_sfRenderOptions field.
inline
void CSMWindowBase::setRenderOptions(RenderOptions * const value)
{
    editSField(RenderOptionsFieldMask);

    _sfRenderOptions.setValue(value);
}
//! Get the value of the CSMWindow::_sfPartitionDrawMode field.

inline
UInt32 &CSMWindowBase::editPartitionDrawMode(void)
{
    editSField(PartitionDrawModeFieldMask);

    return _sfPartitionDrawMode.getValue();
}

//! Get the value of the CSMWindow::_sfPartitionDrawMode field.
inline
      UInt32  CSMWindowBase::getPartitionDrawMode(void) const
{
    return _sfPartitionDrawMode.getValue();
}

//! Set the value of the CSMWindow::_sfPartitionDrawMode field.
inline
void CSMWindowBase::setPartitionDrawMode(const UInt32 value)
{
    editSField(PartitionDrawModeFieldMask);

    _sfPartitionDrawMode.setValue(value);
}
//! Get the value of the CSMWindow::_sfDumpContainer field.

inline
bool &CSMWindowBase::editDumpContainer(void)
{
    editSField(DumpContainerFieldMask);

    return _sfDumpContainer.getValue();
}

//! Get the value of the CSMWindow::_sfDumpContainer field.
inline
      bool  CSMWindowBase::getDumpContainer(void) const
{
    return _sfDumpContainer.getValue();
}

//! Set the value of the CSMWindow::_sfDumpContainer field.
inline
void CSMWindowBase::setDumpContainer(const bool value)
{
    editSField(DumpContainerFieldMask);

    _sfDumpContainer.setValue(value);
}

//! Get the value of the \a index element the CSMWindow::_mfViewports field.
inline
CSMViewport * CSMWindowBase::getViewports(const UInt32 index) const
{
    return _mfViewports[index];
}

//! Get the value of the \a index element the CSMWindow::_mfIgnoreExtensions field.
inline
const std::string &CSMWindowBase::getIgnoreExtensions(const UInt32 index) const
{
    return _mfIgnoreExtensions[index];
}

inline
std::string &CSMWindowBase::editIgnoreExtensions(const UInt32 index)
{
    editMField(IgnoreExtensionsFieldMask, _mfIgnoreExtensions);

    return _mfIgnoreExtensions[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void CSMWindowBase::execSync (      CSMWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
        _sfParent.syncWith(pFrom->_sfParent);

    if(FieldBits::NoField != (ViewportsFieldMask & whichField))
        _mfViewports.syncWith(pFrom->_mfViewports,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (MouseDataFieldMask & whichField))
        _sfMouseData.syncWith(pFrom->_sfMouseData);

    if(FieldBits::NoField != (SizeFieldMask & whichField))
        _sfSize.syncWith(pFrom->_sfSize);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pFrom->_sfPosition);

    if(FieldBits::NoField != (DecorEnabledFieldMask & whichField))
        _sfDecorEnabled.syncWith(pFrom->_sfDecorEnabled);

    if(FieldBits::NoField != (RequestMajorFieldMask & whichField))
        _sfRequestMajor.syncWith(pFrom->_sfRequestMajor);

    if(FieldBits::NoField != (RequestMinorFieldMask & whichField))
        _sfRequestMinor.syncWith(pFrom->_sfRequestMinor);

    if(FieldBits::NoField != (EnableForwardCompatContextFieldMask & whichField))
        _sfEnableForwardCompatContext.syncWith(pFrom->_sfEnableForwardCompatContext);

    if(FieldBits::NoField != (EnableDebugContextFieldMask & whichField))
        _sfEnableDebugContext.syncWith(pFrom->_sfEnableDebugContext);

    if(FieldBits::NoField != (IgnoreExtensionsFieldMask & whichField))
        _mfIgnoreExtensions.syncWith(pFrom->_mfIgnoreExtensions,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (RequestSamplesFieldMask & whichField))
        _sfRequestSamples.syncWith(pFrom->_sfRequestSamples);

    if(FieldBits::NoField != (EnableFSAAFieldMask & whichField))
        _sfEnableFSAA.syncWith(pFrom->_sfEnableFSAA);

    if(FieldBits::NoField != (FsaaHintFieldMask & whichField))
        _sfFsaaHint.syncWith(pFrom->_sfFsaaHint);

    if(FieldBits::NoField != (RenderOptionsFieldMask & whichField))
        _sfRenderOptions.syncWith(pFrom->_sfRenderOptions);

    if(FieldBits::NoField != (PartitionDrawModeFieldMask & whichField))
        _sfPartitionDrawMode.syncWith(pFrom->_sfPartitionDrawMode);

    if(FieldBits::NoField != (DumpContainerFieldMask & whichField))
        _sfDumpContainer.syncWith(pFrom->_sfDumpContainer);
}
#endif


inline
const Char8 *CSMWindowBase::getClassname(void)
{
    return "CSMWindow";
}
OSG_GEN_CONTAINERPTR(CSMWindow);

OSG_END_NAMESPACE

