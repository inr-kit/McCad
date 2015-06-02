// File generated by CPPExt (Transient)
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

#include <McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary.hxx>

#ifndef _Standard_TypeMismatch_HeaderFile
#include <Standard_TypeMismatch.hxx>
#endif

#ifndef _OSD_SharedLibrary_HeaderFile
#include <OSD_SharedLibrary.hxx>
#endif
#ifndef _McCadEXPlug_SequenceOfSharedLibrary_HeaderFile
#include <McCadEXPlug_SequenceOfSharedLibrary.hxx>
#endif
//McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary::~McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary() {}
 


Standard_EXPORT Handle_Standard_Type& McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary_Type_()
{

    static Handle_Standard_Type aType1 = STANDARD_TYPE(TCollection_SeqNode);
  static Handle_Standard_Type aType2 = STANDARD_TYPE(MMgt_TShared);
  static Handle_Standard_Type aType3 = STANDARD_TYPE(Standard_Transient);
 

  static Handle_Standard_Transient _Ancestors[]= {aType1,aType2,aType3,NULL};
  static Handle_Standard_Type _aType = new Standard_Type("McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary",
			                                 sizeof(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary),
			                                 1,
			                                 (Standard_Address)_Ancestors,
			                                 (Standard_Address)NULL);

  return _aType;
}


// DownCast method
//   allow safe downcasting
//
const Handle(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary) Handle(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary)::DownCast(const Handle(Standard_Transient)& AnObject) 
{
  Handle(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary) _anOtherObject;

  if (!AnObject.IsNull()) {
     if (AnObject->IsKind(STANDARD_TYPE(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary))) {
       _anOtherObject = Handle(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary)((Handle(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary)&)AnObject);
     }
  }

  return _anOtherObject ;
}
const Handle(Standard_Type)& McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary::DynamicType() const 
{ 
  return STANDARD_TYPE(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary) ; 
}
//Standard_Boolean McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary::IsKind(const Handle(Standard_Type)& AType) const 
//{ 
//  return (STANDARD_TYPE(McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary) == AType || TCollection_SeqNode::IsKind(AType)); 
//}
//Handle_McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary::~Handle_McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary() {}
#define SeqItem OSD_SharedLibrary
#define SeqItem_hxx <OSD_SharedLibrary.hxx>
#define TCollection_SequenceNode McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary
#define TCollection_SequenceNode_hxx <McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary.hxx>
#define Handle_TCollection_SequenceNode Handle_McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary
#define TCollection_SequenceNode_Type_() McCadEXPlug_SequenceNodeOfSequenceOfSharedLibrary_Type_()
#define TCollection_Sequence McCadEXPlug_SequenceOfSharedLibrary
#define TCollection_Sequence_hxx <McCadEXPlug_SequenceOfSharedLibrary.hxx>
#include <TCollection_SequenceNode.gxx>
