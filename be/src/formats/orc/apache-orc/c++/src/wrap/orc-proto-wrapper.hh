// This file is made available under Elastic License 2.0.
// This file is based on code available under the Apache license here:
//   https://github.com/apache/orc/tree/main/c++/src/wrap/orc-proto-wrapper.hh

/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "Adaptor.hh"

DIAGNOSTIC_PUSH

#if defined(__GNUC__) || defined(__clang__)
DIAGNOSTIC_IGNORE("-Wconversion")
DIAGNOSTIC_IGNORE("-Wdeprecated")
DIAGNOSTIC_IGNORE("-Wsign-conversion")
DIAGNOSTIC_IGNORE("-Wunused-parameter")
#endif

#ifdef __clang__
DIAGNOSTIC_IGNORE("-Wnested-anon-types")
DIAGNOSTIC_IGNORE("-Wreserved-id-macro")
DIAGNOSTIC_IGNORE("-Wshorten-64-to-32")
DIAGNOSTIC_IGNORE("-Wunknown-warning-option")
DIAGNOSTIC_IGNORE("-Wweak-vtables")
DIAGNOSTIC_IGNORE("-Wzero-as-null-pointer-constant")
#endif

#if defined(_MSC_VER)
DIAGNOSTIC_IGNORE(4146) // unary minus operator applied to unsigned type, result still unsigned
DIAGNOSTIC_IGNORE(4800) // forcing value to bool 'true' or 'false'
#endif

#include "orc_proto.pb.h"

DIAGNOSTIC_POP
