/**Author:zx**/
#pragma once
#include "XMLSerialize.h"

class CXMLWrapperMark;
class CXMLWrapperLiquid;
class CXMLWrapperOrgan : public CXMLSerialize
{
public:
	CXMLWrapperOrgan(void);
	~CXMLWrapperOrgan(void);

	IMPL_ATTRIBUTE_STRING(Name)
//	basic
	IMPL_ATTRIBUTE_STRING(AnimationFile)
	IMPL_ATTRIBUTE_STRING(PhysicFile)
	IMPL_ATTRIBUTE_STRING(FFDFile)
	IMPL_ATTRIBUTE_STRING(S3MFile)
	IMPL_ATTRIBUTE_STRING(S1MFile)
	IMPL_ATTRIBUTE_STRING(MXFile)
	IMPL_ATTRIBUTE_STRING(LayerName)
	IMPL_ATTRIBUTE_LONG(UnionedObjID)
	IMPL_ATTRIBUTE_LONG(Type)
	IMPL_ATTRIBUTE_LONG(ID)
	IMPL_ATTRIBUTE_STRING(MaterialName)
	IMPL_ATTRIBUTE_STRING(MaterialNameArray)
	IMPL_ATTRIBUTE_STRING(NativeMaterialName)

//	action
	IMPL_ATTRIBUTE_BOOL(CanAutoCreate)	//决定在场景中是否自动创建，默认true。如果为false，则保留相关信息用于后面使用
	IMPL_ATTRIBUTE_BOOL(CanCut)
	IMPL_ATTRIBUTE_BOOL(CanClamp)
	IMPL_ATTRIBUTE_BOOL(DistributeMass)
	IMPL_ATTRIBUTE_BOOL(CanSmoke)
	IMPL_ATTRIBUTE_BOOL(CanBlood)
	IMPL_ATTRIBUTE_BOOL(CanSpark)
	IMPL_ATTRIBUTE_LONG(BloodType)
	IMPL_ATTRIBUTE_BOOL(CanShedBlood)
	IMPL_ATTRIBUTE_BOOL(CanBigClip)
	IMPL_ATTRIBUTE_BOOL(CanAttachHemoClip)
	IMPL_ATTRIBUTE_BOOL(CanElectricCoagulation)
	IMPL_ATTRIBUTE_BOOL(CanFire)
	IMPL_ATTRIBUTE_BOOL(CanDissect)
	IMPL_ATTRIBUTE_BOOL(CanHook)
	IMPL_ATTRIBUTE_BOOL(IsMensentary)
	IMPL_ATTRIBUTE_BOOL(CanPuncture)

//	Phys
	IMPL_ATTRIBUTE_FLOAT(Mass)
	IMPL_ATTRIBUTE_FLOAT(Stiffness)
    IMPL_ATTRIBUTE_FLOAT(Poissonrate)
	
	IMPL_ATTRIBUTE_FLOAT(EdgePhysStiff)
	IMPL_ATTRIBUTE_FLOAT(EdgePhysDamp)

	IMPL_ATTRIBUTE_FLOAT(TetraPhysStiff)
	IMPL_ATTRIBUTE_FLOAT(TetraPhysDamp)

	IMPL_ATTRIBUTE_FLOAT(FacePhysStiff)
	IMPL_ATTRIBUTE_FLOAT(FacePhysDamp)

	IMPL_ATTRIBUTE_FLOAT(Damp)
	IMPL_ATTRIBUTE_STRING(PointDamp)
	//IMPL_ATTRIBUTE_FLOAT(Strength)
	IMPL_ATTRIBUTE_FLOAT(FurtherStrength)

	IMPL_ATTRIBUTE_STRING(PartName)
	IMPL_ATTRIBUTE_BOOL(DeleteSuperTriangle)
	IMPL_ATTRIBUTE_BOOL(JudgeOrignGeomery)
	IMPL_ATTRIBUTE_BOOL(ExcuHeldPoints)

	IMPL_ATTRIBUTE_BOOL(CanMapping)
	IMPL_ATTRIBUTE_BOOL(MappingMode)

	IMPL_ATTRIBUTE_FLOAT(GravityValue)
	IMPL_ATTRIBUTE_FLOAT3(CustomGravityDir)
	IMPL_ATTRIBUTE_FLOAT(AddBendForce)

//	Soft
//	Soft Organ
//	Soft Tube
//	Soft Other

//	Rigid
//	Rigid Box
//	Rigid Sphere
	IMPL_ATTRIBUTE_STRING(RigidType)
	IMPL_ATTRIBUTE_FLOAT3(SceneMeshInitPosOffset)
	IMPL_ATTRIBUTE_FLOAT3(SceneMeshInitScaleOffset)
	IMPL_ATTRIBUTE_BOOL(CollideWithTool)
	// GoPhysic
	IMPL_ATTRIBUTE_FLOAT3(InitSize)
	// SphereRadius
	IMPL_ATTRIBUTE_FLOAT(SphereRadius)
	IMPL_ATTRIBUTE_BOOL(StaticObject)
	IMPL_ATTRIBUTE_BOOL(ShowMesh)
	IMPL_ATTRIBUTE_FLOAT(RSCollideHardNess)
	IMPL_ATTRIBUTE_FLOAT(RSfrictcoeff)
	IMPL_ATTRIBUTE_BOOL(DisableSSCollide)
	IMPL_ATTRIBUTE_FLOAT(LinearDamping)
	IMPL_ATTRIBUTE_FLOAT(AngularDamping)
	IMPL_ATTRIBUTE_FLOAT(RSMaxPenetrate)
	IMPL_ATTRIBUTE_FLOAT(SurfaceNodeMassMultiply)
	IMPL_ATTRIBUTE_STRING(RSContactMode)
	IMPL_ATTRIBUTE_STRING(FixPointStiffness)
	IMPL_ATTRIBUTE_STRING(TopolgyType)
	IMPL_ATTRIBUTE_LONG(EffectTexSize)
	IMPL_ATTRIBUTE_FLOAT(BurnRadius)
	IMPL_ATTRIBUTE_FLOAT(BurnRation)
	IMPL_ATTRIBUTE_FLOAT(RSCollideMargin)
	IMPL_ATTRIBUTE_FLOAT(TubeRendRadius)
	IMPL_ATTRIBUTE_LONG(TubeFixSection)
	IMPL_ATTRIBUTE_STRING(TubeAttachs)
	IMPL_ATTRIBUTE_BOOL(IncTubeRootRadius)
	IMPL_ATTRIBUTE_BOOL(IncTubeRootWeight)
	IMPL_ATTRIBUTE_FLOAT(ConnectMass)
	IMPL_ATTRIBUTE_FLOAT(CutThreshold)
	IMPL_ATTRIBUTE_FLOAT(CrossDir)
	IMPL_ATTRIBUTE_BOOL(CanBluntDissection)
	IMPL_ATTRIBUTE_STRING(CutMaterialName)
    IMPL_ATTRIBUTE_STRING(AttachStaticMesh)
    IMPL_ATTRIBUTE_FLOAT(AttachStaticMeshThresHold)
	IMPL_ATTRIBUTE_FLOAT(PointResistence)
	//IMPL_ATTRIBUTE_FLOAT(ScalLengthRatio)
	IMPL_ATTRIBUTE_FLOAT(HomingForce)
	IMPL_ATTRIBUTE_FLOAT(RestScaleRatio)
	IMPL_ATTRIBUTE_FLOAT(SurplusRatio)
	IMPL_ATTRIBUTE_FLOAT(ForceFeedbackRatio)
	IMPL_ATTRIBUTE_FLOAT(PointForceMin)
	IMPL_ATTRIBUTE_FLOAT(TubeRadius)
	IMPL_ATTRIBUTE_FLOAT(Diameter)
	IMPL_ATTRIBUTE_FLOAT(FireEffectValue)
	IMPL_ATTRIBUTE_STRING(ObstacleIDs)
	IMPL_ATTRIBUTE_FLOAT3(InitPos)
	IMPL_ATTRIBUTE_QUATERNION(InitQuat)
	IMPL_ATTRIBUTE_STRING(InitClipPos)
	IMPL_ATTRIBUTE_STRING(InitClipQuat)
	IMPL_ATTRIBUTE_STRING(InitToolNearPoint)
	IMPL_ATTRIBUTE_STRING(BindPoint)
	IMPL_ATTRIBUTE_STRING(FixedPoints)
    IMPL_ATTRIBUTE_STRING(ExpandedPoints)    
	IMPL_ATTRIBUTE_STRING(CustomNormalPoints)
    IMPL_ATTRIBUTE_BOOL(UnderControl)
    IMPL_ATTRIBUTE_STRING(InnerLiquid)
	IMPL_ATTRIBUTE_LONG(BloodDirPointID)
	IMPL_ATTRIBUTE_BOOL(HasBloodDirPoint)
	IMPL_ATTRIBUTE_FLOAT(BloodFlowFrameNum)
	IMPL_ATTRIBUTE_STRING(TurntoScaffoldMode)
	IMPL_ATTRIBUTE_STRING(CutActionParticleParam)
	IMPL_ATTRIBUTE_BOOL(CanMultPoint);
	IMPL_ATTRIBUTE_FLOAT(Force_X_K)
	IMPL_ATTRIBUTE_FLOAT(Force_X_B)
	IMPL_ATTRIBUTE_FLOAT(Force_Y_K)
	IMPL_ATTRIBUTE_FLOAT(Force_Y_B)
	IMPL_ATTRIBUTE_FLOAT(Force_Z_K)
	IMPL_ATTRIBUTE_FLOAT(Force_Z_B)
	IMPL_ATTRIBUTE_BOOL(CanOrganForce)
	IMPL_ATTRIBUTE_BOOL(CanAdhesionForce)
	IMPL_ATTRIBUTE_BOOL(CanVision)
	IMPL_ATTRIBUTE_BOOL(CanRedScreen)
	IMPL_ATTRIBUTE_FLOAT(OgranElectricTime)
	IMPL_ATTRIBUTE_BOOL(CanOgranTube)
	IMPL_ATTRIBUTE_FLOAT(OgranForceMaxValue)
	IMPL_ATTRIBUTE_FLOAT(OgranForceMinValue)
    IMPL_ATTRIBUTE_FLOAT(ExpandValue)
    IMPL_ATTRIBUTE_FLOAT3(ExpandCenterPos)
    IMPL_ATTRIBUTE_FLOAT3(ExpandPlanePoint1)
    IMPL_ATTRIBUTE_FLOAT3(ExpandPlanePoint2)
    IMPL_ATTRIBUTE_FLOAT3(ExpandPlanePoint3)
	IMPL_ATTRIBUTE_STRING(PulsePoints)
	IMPL_ATTRIBUTE_FLOAT(BleedingSpeed)
	//used for the new mode of the old veinconnobj 
	IMPL_ATTRIBUTE_BOOL(VeinObjNewMode)
	IMPL_ATTRIBUTE_LONG(ConnStayNum)
	IMPL_ATTRIBUTE_LONG(ConnReduceNum)
	
	//used for the new vein connect
	IMPL_ATTRIBUTE_FLOAT(GallSideWeight)
	IMPL_ATTRIBUTE_FLOAT(LiverSideWeight)
	IMPL_ATTRIBUTE_FLOAT(ConnectStiffnessScale)
	IMPL_ATTRIBUTE_FLOAT(ConnectNodeDistanceStiffness)
	IMPL_ATTRIBUTE_FLOAT(CoonectTetraVolumeStiffness)


	
	vector<CXMLWrapperMark *> m_Marks;
	bool m_flag_Marks;

	void __stdcall Set_Marks(Variant value);
	void __stdcall Get_Marks(Variant * pValue);

	vector<CXMLWrapperLiquid *> m_Liquids;
	bool m_flag_Liquids;

	void __stdcall Set_Liquids(Variant value);
	void __stdcall Get_Liquids(Variant * pValue);

	DECLARE_SERIALIZATION_CLASS(CXMLWrapperOrgan)
};



