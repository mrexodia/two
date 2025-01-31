#pragma once

#ifndef TWO_MODULES
#include <wfc/Types.h>
#endif

#if !defined TWO_MODULES || defined TWO_TYPE_LIB
#include <refl/Meta.h>
#include <refl/Enum.h>
#include <infra/StringOps.h>
#endif

namespace two
{
	export_ template <> inline void to_value(const string& str, two::Result& val) { val = two::Result(enu<two::Result>().value(str.c_str())); };
	export_ template <> inline void to_string(const two::Result& val, string& str) { str = enu<two::Result>().name(uint32_t(val)); };
	
	
}
