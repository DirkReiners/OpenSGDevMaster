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
 **     class State!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTATEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGStateChunk.h> // Chunks Class

#include "OSGStateBase.h"
#include "OSGState.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::State
    \ingroup GrpSystemState

    The state base class. See \ref PageSystemState for the conceptual background.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var StateChunk *    StateBase::_mfChunks
    
*/


void StateBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&State::invalidEditField),
        static_cast     <FieldGetMethodSig >(&State::invalidGetField));

    oType.addInitialDesc(pDesc);
}


StateBase::TypeObject StateBase::_type(
    StateBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&StateBase::createEmptyLocal),
    State::initMethod,
    State::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StateBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"State\"\n"
    "\tparent=\"FieldContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "The state base class. See \\ref PageSystemState for the conceptual background.\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        removeTo=\"NULL\"\n"
    "        clearMField=\"true\"\n"
    "        access=\"none\"\n"
    "        pushToField=\"\"\n"
    "        insertIntoMField=\"\"\n"
    "        replaceInMFieldIndex=\"\"\n"
    "        replaceInMFieldObject=\"\"\n"
    "        removeFromMFieldIndex=\"\"\n"
    "        removeFromMFieldObject=\"\"\n"
    "        clearField=\"\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "The state base class. See \\ref PageSystemState for the conceptual background.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StateBase::getType(void)
{
    return _type;
}

const FieldContainerType &StateBase::getType(void) const
{
    return _type;
}

UInt32 StateBase::getContainerSize(void) const
{
    return sizeof(State);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

UInt32 StateBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void StateBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void StateBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StateTransitPtr StateBase::create(void)
{
    StateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<State>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StateTransitPtr StateBase::createLocal(BitVector bFlags)
{
    StateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<State>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
State *StateBase::createEmpty(void)
{
    State *returnValue;

    newPtr<State>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

State *StateBase::createEmptyLocal(BitVector bFlags)
{
    State *returnValue;

    newPtr<State>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StateBase::shallowCopy(void) const
{
    State *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const State *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr StateBase::shallowCopyLocal(
    BitVector bFlags) const
{
    State *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const State *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

StateBase::StateBase(void) :
    Inherited(),
    _mfChunks                 ()
{
}

StateBase::StateBase(const StateBase &source) :
    Inherited(source),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

StateBase::~StateBase(void)
{
}

void StateBase::onCreate(const State *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        State *pThis = static_cast<State *>(this);
    }
}

GetFieldHandlePtr StateBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr StateBase::editHandleChunks         (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StateBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StateBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StateBase::createAspectCopy(void) const
{
    State *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const State *>(this));

    return returnValue;
}
#endif

void StateBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<State *>::_type("StatePtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(State *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           State *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           State *, 
                           0);

OSG_END_NAMESPACE
