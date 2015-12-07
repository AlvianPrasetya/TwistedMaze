#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct CompositeExpression_t666;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t664;

// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern "C" void CompositeExpression__ctor_m2447 (CompositeExpression_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" ExpressionCollection_t664 * CompositeExpression_get_Expressions_m2448 (CompositeExpression_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern "C" void CompositeExpression_GetWidth_m2449 (CompositeExpression_t666 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern "C" bool CompositeExpression_IsComplex_m2450 (CompositeExpression_t666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
