/**Author:zx**/
#include "StdAfx.h"
#include "XMLWrapperSphere.h"


BEGIN_IMPL_SERIALIZATION_CLASS(CXMLWrapperSphere)
REGISTER_CLASS(Sphere)
REGISTER_ATTRIBUTE(CXMLWrapperSphere,Name,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperSphere,Type,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperSphere,Center,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperSphere,InnerRadius,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperSphere,OuterRadius,VALUE)
REGISTER_ATTRIBUTE(CXMLWrapperSphere,YAxisOffset,VALUE)
END_IMPL_SERIALIZATION_CLASS

CXMLWrapperSphere::CXMLWrapperSphere(void)
{
	INIT_ATTRIBUTE_STRING(Name)
		INIT_ATTRIBUTE_LONG(Type)
		INIT_ATTRIBUTE_FLOAT3(Center)
		INIT_ATTRIBUTE_FLOAT(InnerRadius)
		INIT_ATTRIBUTE_FLOAT(OuterRadius)
		INIT_ATTRIBUTE_FLOAT(YAxisOffset)
}


CXMLWrapperSphere::~CXMLWrapperSphere(void)
{
}
