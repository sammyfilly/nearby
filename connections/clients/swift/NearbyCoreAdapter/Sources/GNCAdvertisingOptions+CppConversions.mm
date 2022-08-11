// Copyright 2022 Google LLC
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

#import "connections/clients/swift/NearbyCoreAdapter/Sources/Public/NearbyCoreAdapter/GNCAdvertisingOptions.h"

#import <Foundation/Foundation.h>

#include "connections/advertising_options.h"

#import "connections/clients/swift/NearbyCoreAdapter/Sources/GNCAdvertisingOptions+CppConversions.h"
#import "connections/clients/swift/NearbyCoreAdapter/Sources/GNCStrategy+Internal.h"

using ::location::nearby::connections::AdvertisingOptions;
using ::location::nearby::connections::CppStrategyFromGNCStrategy;

@implementation GNCAdvertisingOptions (CppConversions)

- (AdvertisingOptions)toCpp {
  AdvertisingOptions advertising_options;
  advertising_options.strategy = CppStrategyFromGNCStrategy(self.strategy);
  return advertising_options;
}

@end