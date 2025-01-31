module;
#include <cpp/preimport.h>
#include <infra/Config.h>

export module two.ecs.meta;
import std.core;
import std.threading;
import std.regex;

import two.ecs;
import two.refl;
import two.infra;
import two.infra.meta;
import two.pool;
import two.pool.meta;
import two.type;
import two.type.meta;

#include <meta/ecs.meta.h>
#include <meta/ecs.conv.h>
