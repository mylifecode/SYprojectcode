/**Author:zx**/
#pragma once
#include "XMLSerialize.h"

class CXMLWrapperLight: public CXMLSerialize
{
public:
	CXMLWrapperLight(void);
	~CXMLWrapperLight(void);

	IMPL_ATTRIBUTE_STRING(Name)
	IMPL_ATTRIBUTE_FLOAT3(LightPos)
	IMPL_ATTRIBUTE_FLOAT3(LightDir)
	IMPL_ATTRIBUTE_LONG(LightType)
	IMPL_ATTRIBUTE_BOOL(Visible)
	IMPL_ATTRIBUTE_BOOL(CastShadows)
	IMPL_ATTRIBUTE_COLOR(ColorAmbient)
	IMPL_ATTRIBUTE_COLOR(ColorDiffuse)
	IMPL_ATTRIBUTE_COLOR(ColorSpecular)
	IMPL_ATTRIBUTE_FLOAT(InnerAngle)
	IMPL_ATTRIBUTE_FLOAT(OuterAngle)
	IMPL_ATTRIBUTE_FLOAT(FallOff)
	IMPL_ATTRIBUTE_FLOAT(Range)
	IMPL_ATTRIBUTE_FLOAT(Constant)
	IMPL_ATTRIBUTE_FLOAT(Linear)
	IMPL_ATTRIBUTE_FLOAT(Quadric)
	IMPL_ATTRIBUTE_FLOAT(Power)
	IMPL_ATTRIBUTE_QUATERNION(Rotation)

	DECLARE_SERIALIZATION_CLASS(CXMLWrapperLight)
};

