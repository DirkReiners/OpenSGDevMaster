/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGFIELDTRAITS_H_
#define _OSGFIELDTRAITS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGCompileTimeFunctions.h"
#include "OSGIDString.h"
#include "OSGFieldForwards.h"
#include "OSGLog.h"
#include "OSGContainerForwards.h"

#include <iosfwd>

#include <boost/mpl/if.hpp>

OSG_BEGIN_NAMESPACE

class FieldType;

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#ifdef OSG_DOC_FILES_IN_MODULE
/*! \file OSGFieldTraits.h
    \ingroup GrpBaseField
    \ingroup GrpBaseFieldTraits
*/
#endif

/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

struct FieldTraitsBase
{
    enum
    {
        NotConvertible        = 0x00,

        ToStringConvertible   = 0x01,
        FromStringConvertible = 0x02,

        ToStreamConvertible   = 0x10,
        FromStreamConvertible = 0x20
    };

    static const Char8 *getPName(void) { return "Field";   }
};

enum VecSize
{
    Vec1,
    Vec2,
    Vec3,
    Vec4
};


template<class ValueT, Int32 iNamespace = 0>
struct FieldTraits;

struct InvalidTrait
{
};

/*! \ingroup GrpBaseFieldTraits */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy            */
#endif

template<class ValueT, Int32 NamespaceI = 0>
struct FieldTraitsTemplateBase : public FieldTraitsBase
{
#ifndef __hpux
    static const UInt32 uiTest = TypeTraits<ValueT>::IsPOD == true;

    typedef typename
        boost::mpl::if_<boost::mpl::bool_<(uiTest == 1)>,
                        const ValueT  ,
                        const ValueT & >::type  ArgumentType;
#else
    typedef typename
    boost::mpl::if_<boost::mpl::bool_<TypeTraits<ValueT>::IsPOD>,
                    const ValueT  ,
                    const ValueT & >::type  ArgumentType;
#endif

    typedef      ValueT                ValueType;
    typedef      FieldDescriptionBase  FieldDescParent;
    static const Int32                 iNamespace = NamespaceI;
};

template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsPODTemplateBase : public FieldTraitsTemplateBase<ValueT,
                                                                   iNamespace>
{
    static bool      getFromCString(      ValueT  &outVal,
                                    const Char8  *&inVal )
    {
        outVal = TypeTraits<ValueT>::getFromCString(inVal);

        return true;
    }

    static void putToString(const ValueT      &inVal,
                                  std::string &outVal)
    {
        TypeTraits<ValueT>::putToString(inVal, outVal);
    }

    static void putToStream(const ValueT    &val,
                                  OutStream &str)
    {
        TypeTraits<ValueT>::putToStream(val, str);
    }

    // Binary

    static UInt32 getBinSize(const ValueT &)
    {
        return sizeof(ValueT);
    }

    static UInt32 getBinSize(const ValueT   *,
                                   UInt32    uiNumObjects)
    {
        return sizeof(ValueT) * uiNumObjects;
    }

    static void copyToBin(      BinaryDataHandler &pMem,
                          const ValueT            &oObject)
    {
        pMem.putValue(oObject);
    }

    static void copyToBin(      BinaryDataHandler &pMem,
                          const ValueT            *pObjectStore,
                                UInt32             uiNumObjects)
    {
        pMem.putValues(&(pObjectStore[0]), uiNumObjects);
    }

    static void copyFromBin(BinaryDataHandler &pMem,
                            ValueT            &oObject)
    {
        pMem.getValue(oObject);
    }

    static void copyFromBin(BinaryDataHandler &pMem,
                            ValueT            *pObjectStore,
                            UInt32             uiNumObjects)
    {
        pMem.getValues(&(pObjectStore[0]), uiNumObjects);
    }
};


template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsVecTemplateBase : public FieldTraitsTemplateBase<ValueT,
                                                                   iNamespace>
{
    // Binary

    typedef FieldTraitsVecTemplateBase<ValueT,
                                       iNamespace>  Self;

    static const UInt32                            _uiSize = ValueT::_uiSize;

    typedef typename ValueT::ValueType              SingleValueT;

    static bool getFromCString(      ValueT  &outVal,
                               const Char8  *&inVal )
    {
        outVal.setValueFromCString(inVal);

        return true;
    }

    static UInt32 getBinSize(const ValueT &)
    {
        return sizeof(SingleValueT) * _uiSize;
    }

    static UInt32 getBinSize(const ValueT   *,
                                   UInt32    uiNumObjects)
    {
        return sizeof(SingleValueT) * _uiSize * uiNumObjects;
    }

    static void copyToBin(      BinaryDataHandler &pMem,
                          const ValueT            &oObject)
    {
        pMem.putValues(&(oObject[0]), _uiSize);
    }

    static void copyToBin(      BinaryDataHandler &pMem,
                          const ValueT            *pObjectStore,
                                UInt32             uiNumObjects)
    {
        pMem.putValues(&(pObjectStore[0][0]), uiNumObjects * _uiSize);
    }

    static void copyFromBin(BinaryDataHandler &pMem,
                            ValueT            &oObject)
    {
        pMem.getValues(&(oObject[0]), _uiSize);
    }

    static void copyFromBin(BinaryDataHandler &pMem,
                            ValueT            *pObjectStore,
                            UInt32             uiNumObjects)
    {
        pMem.getValues(&(pObjectStore[0][0]), uiNumObjects * _uiSize);
    }
};

template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsPtrToStringTemplateBase :
    public FieldTraitsTemplateBase<ValueT, iNamespace>
{
    // Binary

    typedef FieldTraitsPtrToStringTemplateBase<ValueT,
                                               iNamespace>  Self;

    static UInt32 getBinSize(const ValueT &oObject)
    {
        typedef FieldTraits<ValueT, iNamespace> MappedTrait;

        std::string value;

        MappedTrait::putToString(oObject, value);

        return value.length() + 1 + sizeof(UInt32);
    }

    static UInt32 getBinSize(const ValueT   *pObjectStore,
                                   UInt32    uiNumObjects)
    {
        typedef FieldTraits<ValueT, iNamespace> MappedTrait;

        UInt32 size = 0;

        for(UInt32 i = 0; i < uiNumObjects; ++i)
        {
            size += MappedTrait::getBinSize(pObjectStore[i]);
        }

        return size;
    }

    static void copyToBin(      BinaryDataHandler &pMem,
                          const ValueT            &oObject)
    {
        typedef FieldTraits<ValueT, iNamespace> MappedTrait;

        std::string value;

        MappedTrait::putToString(oObject, value);

        pMem.putValue(value);
    }

    static void copyToBin(      BinaryDataHandler &pMem,
                          const ValueT            *pObjectStore,
                                UInt32             uiNumObjects)
    {
        typedef FieldTraits<ValueT, iNamespace> MappedTrait;

        // defaut: copy each element
        for(UInt32 i = 0; i < uiNumObjects; ++i)
        {
            MappedTrait::copyToBin(pMem, pObjectStore[i]);
        }
    }

    static void copyFromBin(BinaryDataHandler &pMem,
                            ValueT            &oObject)
    {
        typedef FieldTraits<ValueT, iNamespace> MappedTrait;

        const Char8 *c = NULL;

        std::string value;

        pMem.getValue(value);

        c = value.c_str();

        MappedTrait::getFromCString(oObject, c);
    }

    static void copyFromBin(BinaryDataHandler &pMem,
                            ValueT            *pObjectStore,
                            UInt32             uiNumObjects)
    {
        typedef FieldTraits<ValueT, iNamespace> MappedTrait;

        // defaut: copy each element
        for(UInt32 i = 0; i < uiNumObjects; ++i)
        {
            MappedTrait::copyFromBin(pMem, pObjectStore[i]);
        }
    }
};

/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsVec1TemplateBase :
    public FieldTraitsVecTemplateBase<ValueT,
                                      iNamespace>
{
    static void putToStream(const ValueT    &val,
                                  OutStream &str)
    {
        typedef typename ValueT::ValueType     ValueType;

        typedef          TypeTraits<ValueType> TypeTrait;

        TypeTrait::putToStream(val[0], str);
    }
};

/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsVec2TemplateBase :
    public FieldTraitsVecTemplateBase<ValueT,
                                      iNamespace>
{
    static void putToStream(const ValueT    &val,
                                  OutStream &str)
    {
        typedef typename ValueT::ValueType     ValueType;

        typedef          TypeTraits<ValueType> TypeTrait;

        TypeTrait::putToStream(val[0], str);

        str << " ";

        TypeTrait::putToStream(val[1], str);
    }
};


/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsVec3TemplateBase :
    public FieldTraitsVecTemplateBase<ValueT,
                                      iNamespace>
{
    static void putToStream(const ValueT    &val,
                                  OutStream &str)
    {
        typedef typename ValueT::ValueType     ValueType;

        typedef          TypeTraits<ValueType> TypeTrait;

        TypeTrait::putToStream(val[0], str);

        str << " ";

        TypeTrait::putToStream(val[1], str);

        str << " ";

        TypeTrait::putToStream(val[2], str);
    }
};


/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template<class ValueT, Int32 iNamespace = 0>
struct FieldTraitsVec4TemplateBase :
    public FieldTraitsVecTemplateBase<ValueT,
                                      iNamespace>
{
    static void putToStream(const ValueT    &val,
                                  OutStream &str)
    {
        typedef typename ValueT::ValueType     ValueType;

        typedef          TypeTraits<ValueType> TypeTrait;

        TypeTrait::putToStream(val[0], str);

        str << " ";

        TypeTrait::putToStream(val[1], str);

        str << " ";

        TypeTrait::putToStream(val[2], str);

        str << " ";

        TypeTrait::putToStream(val[3], str);
    }
};

struct FieldDescBase
{
    static  const Int32                iNamespace = 0;

    typedef       FieldDescriptionBase Parent;
};

template<class DescT, enum FieldCardinality eFieldCard>
class FieldDescription : public DescT::FieldDescParent
{
    struct SFieldFunctions;
    friend struct SFieldFunctions;

    struct MFieldFunctions;
    friend struct MFieldFunctions;

    typedef          FieldDescription<DescT,
                                      eFieldCard> Self;

    typedef typename DescT::FieldDescParent       Inherited;
    typedef typename Inherited::StringVector      StringVector;

    typedef typename
      boost::mpl::if_<boost::mpl::bool_<(eFieldCard == SingleField)>,
                      SField<typename DescT::ValueType,
                                      DescT::iNamespace>,
                      MField<typename DescT::ValueType,
                                      DescT::iNamespace> >::type HandledField;

    struct SFieldFunctions
    {
        static void pushValueFromCString(const Char8        *str,
                                               HandledField *pField);

        static void pushValueToCString  (const HandledField *pField,
                                               Char8        *str   );


        static void pushValueFromString (const std::string  &in,
                                               HandledField *pField);

        static void pushValueToString   (const HandledField *pField,
                                               std::string  &out   );


        static void pushValueFromStream(      std::istream &str,
                                              HandledField *pField );

        static void pushValueToStream  (const HandledField *pField,
                                              OutStream    &str    );

        static void pushSizeToStream   (const HandledField *pField,
                                              OutStream    &str    );


        static void copyValues         (const HandledField *pSrc,
                                              HandledField *pDst   );
    };

    struct MFieldFunctions
    {
        static void pushValueFromCString(const Char8        *str,
                                               HandledField *pField);

        static void pushValueToCString  (const HandledField *pField,
                                               Char8        *str   );


        static void pushValueFromString (const std::string   &in,
                                               HandledField *pField);

        static void pushValueToString   (const HandledField *pField,
                                               std::string  &out   );


        static void pushValueFromStream(      std::istream &str,
                                              HandledField *pField );

        static void pushValueToStream  (const HandledField *pField,
                                              OutStream    &str    );

        static void pushSizeToStream   (const HandledField *pField,
                                              OutStream    &str    );


        static void copyValues         (const HandledField *pSrc,
                                              HandledField *pDst  );
    };

    typedef typename
        boost::mpl::if_<boost::mpl::bool_<(eFieldCard == SingleField)>,
                         SFieldFunctions,
                         MFieldFunctions>::type FieldFunctions;

    void cloneValues(
        const Field                                  *pSrc,
        const UInt32                                  fieldId,
              FieldContainerPtrConstArg               pDst,
        const std::vector<const FieldContainerType*> &shareTypes,
        const std::vector<const FieldContainerType*> &ignoreTypes,
        const std::vector<UInt16>                    &shareGroupIds,
        const std::vector<UInt16>                    &ignoreGroupIds) const;

    void shareValues(
        const Field                                  *pSrc,
        const UInt32                                  fieldId,
              FieldContainerPtrConstArg               pDst,
        const std::vector<const FieldContainerType*> &cloneTypes,
        const std::vector<const FieldContainerType*> &ignoreTypes,
        const std::vector<UInt16>                    &cloneGroupIds,
        const std::vector<UInt16>                    &ignoreGroupIds) const;

  public:

    FieldDescription(const FieldType        &elementType,
                     const Char8            *szName,
                     std::string             documentation,
                     const UInt32            uiFieldId,
                     const BitVector         vFieldMask,
                     const bool              bInternal,
                     const UInt32            uiFieldFlags,
                           FieldEditMethod   fEditMethod,
                           FieldGetMethod    fGetMethod,
                     const Char8            *defaultValue = NULL );

    FieldDescription(const FieldType            &elementType,
                     const Char8                *szName,
                     std::string                 documentation,
                     const UInt32                uiFieldId,
                     const BitVector             vFieldMask,
                           FieldIndexEditMethod  fIndexedEditMethod,
                           FieldIndexGetMethod   fIndexedGetMethod,
                     const bool                  bInternal,
                     const UInt32                uiFieldFlags,
                     const Char8                *defaultValue = NULL );

    FieldDescription(const FieldDescription &source);

    virtual ~FieldDescription(void);

          HandledField *dcast       (      Field *pField) const;
    const HandledField *dcast_const (const Field *pField) const;


    virtual void pushValueFromCString(const Char8        *str,
                                           Field         *pField) const;

    virtual void pushValueToCString  (const Field        *pField,
                                            Char8        *str) const;


    virtual void pushValueFromString (const std::string  &in,
                                            Field        *pField) const;

    virtual void pushValueToString   (const Field        *pField,
                                            std::string  &out   ) const;


    virtual void pushValueFromStream (      std::istream &str,
                                            Field        *pField) const;

    virtual void pushValueToStream   (const Field        *pField,
                                            OutStream    &str   ) const;

    virtual void pushSizeToStream    (const Field        *pField,
                                            OutStream    &str   ) const;


    virtual void copyValues         (const Field *pSrc,
                                           Field *pDst  ) const;

    virtual void cloneValuesV(
        const Field                                  *pSrc,
        const UInt32                                  fieldId,
              FieldContainerPtrConstArg               pDst,
        const std::vector<const FieldContainerType*> &shareTypes,
        const std::vector<const FieldContainerType*> &ignoreTypes,
        const std::vector<UInt16>                    &shareGroupIds,
        const std::vector<UInt16>                    &ignoreGroupIds) const;

    virtual void shareValuesV(
        const Field                                  *pSrc,
        const UInt32                                  fieldId,
              FieldContainerPtrConstArg               pDst,
        const std::vector<const FieldContainerType*> &cloneTypes,
        const std::vector<const FieldContainerType*> &ignoreTypes,
        const std::vector<UInt16>                    &cloneGroupIds,
        const std::vector<UInt16>                    &ignoreGroupIds) const;

    virtual bool equal(const Field *lhs,
                       const Field *rhs) const;

    virtual Field                *createField(void) const;

    virtual FieldDescriptionBase *clone      (void) const;
};

template <class T, Int32 iNamespace = 0>
struct StreamConversionError
{
    static void getFromStream(      T            &,
                                    std::istream &)
    {
        SLOG << "Error from stream conversion not available for "
             << FieldTraits<T, iNamespace>::getType().getCName() << std::endl;
    }

    static void putToStream(const T         &,
                                  OutStream &)
    {
        SLOG << "Error to stream conversion not available for "
             << FieldTraits<T, iNamespace>::getType().getCName() << std::endl;
    }
};

template <class T, Int32 iNamespace = 0>
struct StringConversionError
{
    static void getFromCString(      T      &,
                               const Char8 *&)
    {
        SLOG << "Error from string conversion not available for "
             << FieldTraits<T, iNamespace>::getType().getCName() << std::endl;
    }

    static void putToString(const T           &,
                                  std::string &)
    {
        SLOG << "Error to string conversion not available for "
             << FieldTraits<T, iNamespace>::getType().getCName() << std::endl;
    }
};

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

OSG_END_NAMESPACE

#define OSGFIELDTRAITS_HEADER_CVSID "@(#)$Id$"

#include "OSGFieldTraits.inl"

#endif /* _OSGFIELDTRAITS_H_ */
