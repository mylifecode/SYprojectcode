#include "StdAfx.h"
#include "XMLWrapperTip.h"

BEGIN_IMPL_SERIALIZATION_CLASS(CXMLWrapperTip)
REGISTER_CLASS(Tip)
REGISTER_ATTRIBUTE(CXMLWrapperTip,Name,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperTip,Description,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperTip,IconType,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperTip,CustomPosX,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperTip,CustomPosY,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperTip,LastSeconds,VALUE)
END_IMPL_SERIALIZATION_CLASS

CXMLWrapperTip::CXMLWrapperTip(void)
{
	INIT_ATTRIBUTE_STRING(Name)
	INIT_ATTRIBUTE_STRING(Description)
	INIT_ATTRIBUTE_STRING(IconType)
	INIT_ATTRIBUTE_LONG(CustomPosX)
	INIT_ATTRIBUTE_LONG(CustomPosY)
	INIT_ATTRIBUTE_LONG(LastSeconds)
}

CXMLWrapperTip::~CXMLWrapperTip(void)
{
}