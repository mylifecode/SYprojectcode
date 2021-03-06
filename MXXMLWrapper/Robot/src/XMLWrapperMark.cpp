/**Author:zx**/
#include "StdAfx.h"
#include "XMLWrapperMark.h"

BEGIN_IMPL_SERIALIZATION_CLASS(CXMLWrapperMark)
REGISTER_CLASS(Mark)
REGISTER_ATTRIBUTE(CXMLWrapperMark,Name,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperMark,SMFileType,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperMark,Indexs,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperMark,Color,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperMark,ShowTime,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperMark,MarkHideType,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperMark,NeedShow,VALUE)
END_IMPL_SERIALIZATION_CLASS

CXMLWrapperMark::CXMLWrapperMark(void)
{
	INIT_ATTRIBUTE_STRING(Name)
	INIT_ATTRIBUTE_LONG(SMFileType)
	INIT_ATTRIBUTE_STRING(Indexs)
	INIT_ATTRIBUTE_COLOR(Color)
	INIT_ATTRIBUTE_LONG(ShowTime)
	INIT_ATTRIBUTE_STRING(MarkHideType)
	INIT_ATTRIBUTE_BOOL_VALUE(NeedShow,true)
}

CXMLWrapperMark::~CXMLWrapperMark(void)
{
}
