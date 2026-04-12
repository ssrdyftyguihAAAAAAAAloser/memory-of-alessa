#include "Effect2/hh_class_wrapper.h"

static void ViewFrustum_Primitive_ClipMatrix_Create(void);
static void ViewFrustum_BoundingBox_ClipMatrix_Create(void);
static void AlwaysFront_WorldView_Matrix_Create(void);

extern /* static */ HH_Class_Wrapper_Work * _pWork;

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", ViewFrustum_Primitive_ClipMatrix_Create);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", ViewFrustum_BoundingBox_ClipMatrix_Create);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", AlwaysFront_WorldView_Matrix_Create);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_RotTrans_PerspectiveProjection_Clip);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142960);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142A00);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_Point_Clip_Judge);

void HH_ClassWrapper_Matrix_Group_Update(void) {
    
    ViewFrustum_Primitive_ClipMatrix_Create();
    
    
    ViewFrustum_BoundingBox_ClipMatrix_Create();
    
    
    AlwaysFront_WorldView_Matrix_Create();
}

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_ViewFrustum_Primitive_ClipMatrix_Get);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142B50);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142B60);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_WorldViewMatrix_Get);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_ViewScreenMatrix_Get);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142B90);


INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_ViewingFrustumParamerter_NearZ_Get);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_ViewingFrustumParamerter_FarZ_Get);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142BC0);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142BD0);

float HH_ClassWrapper_Float_Clamp(float Src_Value, float Min, float Max) {
    return float_min(float_max(Src_Value, Min), Max);
}

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142C00);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142C10);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", HH_ClassWrapper_SpotLight_ColorRatio_Calculator);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142D90);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142DA0);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142DE0);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142E30);

INCLUDE_ASM("asm/nonmatchings/Effect2/hh_class_wrapper", func_00142EA0);
