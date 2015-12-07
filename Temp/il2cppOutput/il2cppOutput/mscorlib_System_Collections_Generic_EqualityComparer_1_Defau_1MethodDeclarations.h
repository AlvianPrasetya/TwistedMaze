#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2092;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m10400_gshared (DefaultComparer_t2092 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10400(__this, method) (( void (*) (DefaultComparer_t2092 *, const MethodInfo*))DefaultComparer__ctor_m10400_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10401_gshared (DefaultComparer_t2092 * __this, UIVertex_t209  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10401(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2092 *, UIVertex_t209 , const MethodInfo*))DefaultComparer_GetHashCode_m10401_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10402_gshared (DefaultComparer_t2092 * __this, UIVertex_t209  ___x, UIVertex_t209  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10402(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2092 *, UIVertex_t209 , UIVertex_t209 , const MethodInfo*))DefaultComparer_Equals_m10402_gshared)(__this, ___x, ___y, method)
