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

#ifndef _McCadCom_CasDocument_HeaderFile
#define _McCadCom_CasDocument_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadCom_CasDocument_HeaderFile
#include <Handle_McCadCom_CasDocument.hxx>
#endif

#ifndef _McCadCom_ListOfCasView_HeaderFile
#include <McCadCom_ListOfCasView.hxx>
#endif
#ifndef _Handle_AIS_InteractiveContext_HeaderFile
#include <Handle_AIS_InteractiveContext.hxx>
#endif
#ifndef _McCadCom_Document_HeaderFile
#include <McCadCom_Document.hxx>
#endif
#ifndef _Handle_McCadCom_CasView_HeaderFile
#include <Handle_McCadCom_CasView.hxx>
#endif
#ifndef _Handle_AIS_Shape_HeaderFile
#include <Handle_AIS_Shape.hxx>
#endif

#include <TDocStd_Document.hxx>
#include <Quantity_Color.hxx>

class AIS_InteractiveContext;
class McCadCom_CasView;
class AIS_Shape;
class McCadCom_ListOfCasView;


//! base Document class <br>
class McCadCom_CasDocument : public McCadCom_Document/*, public TDocStd_Document*/{

public:
 // Methods PUBLIC
 //


Standard_EXPORT McCadCom_CasDocument();


Standard_EXPORT McCadCom_CasDocument(const Handle(AIS_InteractiveContext)& theContext);


Standard_EXPORT McCadCom_CasDocument(const Standard_Integer& theID);


Standard_EXPORT virtual  void Notify() const;


Standard_EXPORT virtual  void Attach(const Handle(McCadCom_CasView)& theView) ;


Standard_EXPORT virtual  void AddShape(const Handle(AIS_Shape)& theAISShape) ;


Standard_EXPORT virtual  void RemoveShape(const Handle(AIS_Shape)& theAISShape) ;


Standard_EXPORT virtual  void SetContext(const Handle(AIS_InteractiveContext)& theContext) ;


Standard_EXPORT virtual  void SetBgColor(const Quantity_Color& theCol) ;


Standard_EXPORT virtual  Quantity_Color GetBgColor() const;


Standard_EXPORT virtual  Handle_AIS_InteractiveContext GetContext() const;


Standard_EXPORT virtual  Handle_McCadCom_CasView NewView() ;


Standard_EXPORT virtual  void Views(McCadCom_ListOfCasView& theViewList) ;
//Standard_EXPORT ~McCadCom_CasDocument();


Standard_EXPORT void SetTDoc(const Handle_TDocStd_Document& theTDoc) ;


Standard_EXPORT Handle_TDocStd_Document GetTDoc() ;


 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 //


 // Fields PROTECTED
 //
McCadCom_ListOfCasView myViews;
Handle_AIS_InteractiveContext myContext;


private:

 // Methods PRIVATE
 //


 // Fields PRIVATE
 //
 Handle_TDocStd_Document myTDoc;
 Quantity_Color myBgCol;

};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif