#ifdef TWO_MODULES
module;
#include <infra/Cpp20.h>
module two.jobs.meta;
#else
#include <cstddef>
#include <stl/new.h>
#include <infra/ToString.h>
#include <infra/ToValue.h>
#include <type/Vector.h>
#include <refl/MetaDecl.h>
#include <refl/Module.h>
#include <meta/infra.meta.h>
#include <meta/type.meta.h>
#include <meta/jobs.meta.h>
#include <meta/jobs.conv.h>
#include <jobs/Api.h>
#endif

using namespace two;


namespace two
{
	void two_jobs_meta(Module& m)
	{
	UNUSED(m);
	
	// Base Types
	
	// Enums
	
	// Sequences
	
	// two::JobSystem
	{
		Type& t = type<two::JobSystem>();
		static Meta meta = { t, &namspc({ "two" }), "JobSystem", sizeof(two::JobSystem), TypeClass::Object };
		// bases
		// defaults
		// constructors
		// copy constructor
		// members
		// methods
		// static members
		static Class cls = { t, {}, {}, {}, {}, {}, {}, {}, };
	}
	
	
		m.m_types.push_back(&type<two::JobSystem>());
	}
}

namespace two
{
	two_jobs::two_jobs()
		: Module("two::jobs", { &two_infra::m(), &two_type::m() })
	{
		// setup reflection meta data
		two_jobs_meta(*this);
	}
}

#ifdef TWO_JOBS_MODULE
extern "C"
Module& getModule()
{
	return two_jobs::m();
}
#endif
