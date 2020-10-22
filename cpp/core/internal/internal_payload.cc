// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "core/internal/internal_payload.h"

namespace location {
namespace nearby {
namespace connections {

InternalPayload::InternalPayload(Payload payload)
    : payload_(std::move(payload)), payload_id_(payload_.GetId()) {}

Payload InternalPayload::ReleasePayload() {
  return std::move(payload_);
}

Payload::Id InternalPayload::GetId() const { return payload_id_; }

}  // namespace connections
}  // namespace nearby
}  // namespace location
