/* Copyright (c) 2019 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "../../../../../../chrome/browser/profiles/profile.cc"

#include "brave/browser/tor/buildflags.h"
#include "brave/common/tor/pref_names.h"

bool Profile::IsTorProfile() const {
#if BUILDFLAG(ENABLE_TOR)
  return GetPrefs()->GetBoolean(tor::prefs::kProfileUsingTor);
#else
  return false;
#endif
}
