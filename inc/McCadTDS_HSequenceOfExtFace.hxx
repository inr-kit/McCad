// File generated by CPPExt (Transient)
//
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadTDS_HSequenceOfExtFace_HeaderFile
#define _McCadTDS_HSequenceOfExtFace_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadTDS_HSequenceOfExtFace_HeaderFile
#include <Handle_McCadTDS_HSequenceOfExtFace.hxx>
#endif

#ifndef _McCadTDS_SequenceOfExtFace_HeaderFile
#include <McCadTDS_SequenceOfExtFace.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_McCadTDS_ExtFace_HeaderFile
#include <Handle_McCadTDS_ExtFace.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class McCadTDS_ExtFace;
class McCadTDS_SequenceOfExtFace;



class McCadTDS_HSequenceOfExtFace : public MMgt_TShared {

public:
 // Methods PUBLIC
 // 

McCadTDS_HSequenceOfExtFace();

  Standard_Boolean IsEmpty() const;

  Standard_Integer Length() const;


Standard_EXPORT   void Clear() ;


Standard_EXPORT   void Append(const Handle(McCadTDS_ExtFace)& anItem) ;


Standard_EXPORT   void Append(const Handle(McCadTDS_HSequenceOfExtFace)& aSequence) ;


Standard_EXPORT   void Prepend(const Handle(McCadTDS_ExtFace)& anItem) ;


Standard_EXPORT   void Prepend(const Handle(McCadTDS_HSequenceOfExtFace)& aSequence) ;


Standard_EXPORT   void Reverse() ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadTDS_ExtFace)& anItem) ;


Standard_EXPORT   void InsertBefore(const Standard_Integer anIndex,const Handle(McCadTDS_HSequenceOfExtFace)& aSequence) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadTDS_ExtFace)& anItem) ;


Standard_EXPORT   void InsertAfter(const Standard_Integer anIndex,const Handle(McCadTDS_HSequenceOfExtFace)& aSequence) ;


Standard_EXPORT   void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;


Standard_EXPORT   Handle_McCadTDS_HSequenceOfExtFace Split(const Standard_Integer anIndex) ;


Standard_EXPORT   void SetValue(const Standard_Integer anIndex,const Handle(McCadTDS_ExtFace)& anItem) ;


Standard_EXPORT  const Handle_McCadTDS_ExtFace& Value(const Standard_Integer anIndex) const;


Standard_EXPORT   Handle_McCadTDS_ExtFace& ChangeValue(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer anIndex) ;


Standard_EXPORT   void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;

 const McCadTDS_SequenceOfExtFace& Sequence() const;

  McCadTDS_SequenceOfExtFace& ChangeSequence() ;


Standard_EXPORT   Handle_McCadTDS_HSequenceOfExtFace ShallowCopy() const;
//Standard_EXPORT ~McCadTDS_HSequenceOfExtFace();




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 // 


 // Fields PROTECTED
 //


private: 

 // Methods PRIVATE
 // 


 // Fields PRIVATE
 //
McCadTDS_SequenceOfExtFace mySequence;


};

#define Item Handle_McCadTDS_ExtFace
#define Item_hxx <McCadTDS_ExtFace.hxx>
#define TheSequence McCadTDS_SequenceOfExtFace
#define TheSequence_hxx <McCadTDS_SequenceOfExtFace.hxx>
#define TCollection_HSequence McCadTDS_HSequenceOfExtFace
#define TCollection_HSequence_hxx <McCadTDS_HSequenceOfExtFace.hxx>
#define Handle_TCollection_HSequence Handle_McCadTDS_HSequenceOfExtFace
#define TCollection_HSequence_Type_() McCadTDS_HSequenceOfExtFace_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
//
inline Handle_McCadTDS_HSequenceOfExtFace ShallowCopy(const Handle_McCadTDS_HSequenceOfExtFace& me) {
 return me->ShallowCopy();
}



#endif
