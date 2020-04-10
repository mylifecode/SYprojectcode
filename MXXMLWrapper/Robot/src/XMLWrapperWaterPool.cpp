#include "StdAfx.h"
#include "XMLWrapperWaterPool.h"

BEGIN_IMPL_SERIALIZATION_CLASS(CXMLWrapperWaterPool)
	REGISTER_CLASS(WaterPool)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,Origin,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,Normal,VALUE)

	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,MeshWidth,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,MeshHeight,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,ActualWidth,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,ActualHeight,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,MaxHeight,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,CenterAndStageHeight,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,IsCenterChangeBySuction,VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool, IsSoakOrgans, VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool, MeshName, VALUE)
	REGISTER_ATTRIBUTE(CXMLWrapperWaterPool,RejectOrganIDs,VALUE)
END_IMPL_SERIALIZATION_CLASS


CXMLWrapperWaterPool::CXMLWrapperWaterPool( void )
{
	INIT_ATTRIBUTE_FLOAT3(Origin)
	INIT_ATTRIBUTE_FLOAT3(Normal)

	INIT_ATTRIBUTE_FLOAT_VALUE(MeshWidth,1.0)
	INIT_ATTRIBUTE_FLOAT_VALUE(MeshHeight,1.0)
	INIT_ATTRIBUTE_FLOAT_VALUE(ActualWidth,1.0)
	INIT_ATTRIBUTE_FLOAT_VALUE(ActualHeight,1.0)
	INIT_ATTRIBUTE_FLOAT_VALUE(MaxHeight,100000.0)
	INIT_ATTRIBUTE_FLOAT3(CenterAndStageHeight)
	INIT_ATTRIBUTE_BOOL_VALUE(IsCenterChangeBySuction , false)
	INIT_ATTRIBUTE_BOOL_VALUE(IsSoakOrgans, false)

	INIT_ATTRIBUTE_STRING(MeshName)
	INIT_ATTRIBUTE_STRING(RejectOrganIDs)
}

CXMLWrapperWaterPool::~CXMLWrapperWaterPool( void )
{

}

