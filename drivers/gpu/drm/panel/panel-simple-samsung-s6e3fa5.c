// SPDX-License-Identifier: GPL-2.0-only
// Copyright (c) 2013, The Linux Foundation. All rights reserved.

static const struct drm_display_mode samsung_s6e3fa5_mode = {
	.clock = (1080 + 120 + 19 + 70) * (1920 + 18 + 2 + 4) * 60 / 1000,
	.hdisplay = 1080,
	.hsync_start = 1080 + 120,
	.hsync_end = 1080 + 120 + 19,
	.htotal = 1080 + 120 + 19 + 70,
	.vdisplay = 1920,
	.vsync_start = 1920 + 18,
	.vsync_end = 1920 + 18 + 2,
	.vtotal = 1920 + 18 + 2 + 4,
	.vrefresh = 60,
	.width_mm = 68,
	.height_mm = 122,
};

static const struct panel_desc_dsi samsung_s6e3fa5 = {
	.desc = {
		.modes = &samsung_s6e3fa5_mode,
		.num_modes = 1,
		.bpc = 8,
		.size = {
			.width = 68,
			.height = 122,
		},
	},
	.flags = MIPI_DSI_MODE_VIDEO_BURST | MIPI_DSI_MODE_VIDEO_HSE |
		 MIPI_DSI_MODE_EOT_PACKET | MIPI_DSI_CLOCK_NON_CONTINUOUS,
	.format = MIPI_DSI_FMT_RGB888,
	.lanes = 4,
};
