/* Copyright (c) 2022 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_CHROMIUM_SRC_THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_NAVIGATOR_LANGUAGE_H_
#define BRAVE_CHROMIUM_SRC_THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_NAVIGATOR_LANGUAGE_H_

#define EnsureUpdatedLanguage           \
  EnsureUpdatedLanguage_ChromiumImpl(); \
  void EnsureUpdatedLanguage

#include "src/third_party/blink/renderer/core/frame/navigator_language.h"

#undef EnsureUpdatedLanguage

#endif  // BRAVE_CHROMIUM_SRC_THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_NAVIGATOR_LANGUAGE_H_
