/*
 * Copyright (C) 2021 crDroid Android Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t enchilada_info = {
    .brand = "OnePlus",
    .device = "OnePlus6",
    .name = "OnePlus6",
    .model = "ONEPLUS A6003",
    .build_fingerprint = "OnePlus/OnePlus6/OnePlus6:11/RKQ1.201217.002/2111252325:user/release-keys",
};

void vendor_load_properties() {
    set_dalvik_heap();
    set_variant_props(enchilada_info);
}
