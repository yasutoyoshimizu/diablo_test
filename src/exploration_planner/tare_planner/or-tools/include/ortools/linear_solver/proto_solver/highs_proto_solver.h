// Copyright 2010-2022 Google LLC
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef OR_TOOLS_LINEAR_SOLVER_PROTO_SOLVER_HIGHS_PROTO_SOLVER_H_
#define OR_TOOLS_LINEAR_SOLVER_PROTO_SOLVER_HIGHS_PROTO_SOLVER_H_

#include <functional>
#include <string>

#include "absl/status/statusor.h"
#include "ortools/linear_solver/linear_solver.pb.h"

namespace operations_research {

// Solve the input MIP model with the HIGHS solver.
absl::StatusOr<MPSolutionResponse> HighsSolveProto(MPModelRequest request);

}  // namespace operations_research

#endif  // OR_TOOLS_LINEAR_SOLVER_PROTO_SOLVER_HIGHS_PROTO_SOLVER_H_
