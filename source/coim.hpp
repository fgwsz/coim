#pragma once
#include<coim/AddConst.hpp>
#include<coim/AddCv.hpp>
#include<coim/AddLvalueReference.hpp>
#include<coim/AddPointer.hpp>
#include<coim/AddRvalueReference.hpp>
#include<coim/AddVolatile.hpp>
#include<coim/COIM_CONCAT.hpp>
#include<coim/COIM_STATIC_CHECK.hpp>
#include<coim/CommonType.hpp>
#include<coim/Conditional.hpp>
#include<coim/Conjunction.hpp>
#include<coim/Decay.hpp>
#include<coim/Disjunction.hpp>
#include<coim/EnableIf.hpp>
#include<coim/Extent.hpp>
#include<coim/IntegerSequence.hpp>
#include<coim/IntegralConstant.hpp>
#include<coim/IsArithmetic.hpp>
#include<coim/IsArray.hpp>
#include<coim/IsBaseOf.hpp>
#include<coim/IsBoundedArray.hpp>
#include<coim/IsCompound.hpp>
#include<coim/IsConst.hpp>
#include<coim/IsConvertible.hpp>
#include<coim/IsEnum.hpp>
#include<coim/IsFloatingPoint.hpp>
#include<coim/IsFunction.hpp>
#include<coim/IsFundamental.hpp>
#include<coim/IsIntegral.hpp>
#include<coim/IsLvalueReference.hpp>
#include<coim/IsMemberFunctionPointer.hpp>
#include<coim/IsMemberObjectPointer.hpp>
#include<coim/IsMemberPointer.hpp>
#include<coim/IsNothrowConvertible.hpp>
#include<coim/IsNullPointer.hpp>
#include<coim/IsObject.hpp>
#include<coim/IsPointer.hpp>
#include<coim/IsPolymorphic.hpp>
#include<coim/IsReference.hpp>
#include<coim/IsRvalueReference.hpp>
#include<coim/IsSame.hpp>
#include<coim/IsScalar.hpp>
#include<coim/IsSigned.hpp>
#include<coim/IsUnboundedArray.hpp>
#include<coim/IsUnsigned.hpp>
#include<coim/IsVoid.hpp>
#include<coim/IsVolatile.hpp>
#include<coim/Negation.hpp>
#include<coim/Rank.hpp>
#include<coim/RemoveAllExtents.hpp>
#include<coim/RemoveConst.hpp>
#include<coim/RemoveCv.hpp>
#include<coim/RemoveCvref.hpp>
#include<coim/RemoveExtent.hpp>
#include<coim/RemovePointer.hpp>
#include<coim/RemoveReference.hpp>
#include<coim/RemoveVolatile.hpp>
#include<coim/TypeIdentity.hpp>
#include<coim/add_const_t.hpp>
#include<coim/add_cv_t.hpp>
#include<coim/add_lvalue_reference_t.hpp>
#include<coim/add_pointer_t.hpp>
#include<coim/add_rvalue_reference_t.hpp>
#include<coim/add_volatile_t.hpp>
#include<coim/bool_constant.hpp>
#include<coim/common_type_t.hpp>
#include<coim/conditional_t.hpp>
#include<coim/conjunction_v.hpp>
#include<coim/decay_t.hpp>
#include<coim/declval.hpp>
#include<coim/disjunction_v.hpp>
#include<coim/enable_if_t.hpp>
#include<coim/extent_v.hpp>
#include<coim/false_type.hpp>
#include<coim/forward.hpp>
#include<coim/index_sequence_for.hpp>
#include<coim/index_sequence.hpp>
#include<coim/is_arithmetic_v.hpp>
#include<coim/is_array_v.hpp>
#include<coim/is_base_of_v.hpp>
#include<coim/is_bounded_array_v.hpp>
#include<coim/is_compound_v.hpp>
#include<coim/is_const_v.hpp>
#include<coim/is_convertible_v.hpp>
#include<coim/is_enum_v.hpp>
#include<coim/is_floating_point_v.hpp>
#include<coim/is_function_v.hpp>
#include<coim/is_fundamental_v.hpp>
#include<coim/is_integral_v.hpp>
#include<coim/is_lvalue_reference_v.hpp>
#include<coim/is_member_function_pointer_v.hpp>
#include<coim/is_member_object_pointer_v.hpp>
#include<coim/is_member_pointer_v.hpp>
#include<coim/is_nothrow_convertible_v.hpp>
#include<coim/is_null_pointer_v.hpp>
#include<coim/is_object_v.hpp>
#include<coim/is_pointer_v.hpp>
#include<coim/is_polymorphic_v.hpp>
#include<coim/is_reference_v.hpp>
#include<coim/is_rvalue_reference_v.hpp>
#include<coim/is_same_v.hpp>
#include<coim/is_scalar_v.hpp>
#include<coim/is_signed_v.hpp>
#include<coim/is_unbounded_array_v.hpp>
#include<coim/is_unsigned_v.hpp>
#include<coim/is_void_v.hpp>
#include<coim/is_volatile_v.hpp>
#include<coim/make_index_sequence.hpp>
#include<coim/make_integer_sequence.hpp>
#include<coim/move.hpp>
#include<coim/negation_v.hpp>
#include<coim/nullptr_t.hpp>
#include<coim/rank_v.hpp>
#include<coim/remove_all_extents_t.hpp>
#include<coim/remove_const_t.hpp>
#include<coim/remove_cvref_t.hpp>
#include<coim/remove_cv_t.hpp>
#include<coim/remove_extent_t.hpp>
#include<coim/remove_pointer_t.hpp>
#include<coim/remove_reference_t.hpp>
#include<coim/remove_volatile_t.hpp>
#include<coim/size_t.hpp>
#include<coim/true_type.hpp>
#include<coim/type_identity_t.hpp>
#include<coim/void_t.hpp>
