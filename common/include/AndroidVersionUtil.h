/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_ANDROID_VERSION_UTILS_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_ANDROID_VERSION_UTILS_H

#include <android/api-level.h>

// TODO: replace __ANDROID_API_FUTURE__with 31 when it's official (b/178144708)
#define __NNAPI_AIDL_MIN_ANDROID_API__ __ANDROID_API_FUTURE__

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_ANDROID_VERSION_UTILS_H
