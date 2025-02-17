// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2019 MediaTek Inc.
 */
/*******************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
********************************************************************************
*/
#include <linux/of_device.h>

#include "consys_hw.h"

/*******************************************************************************
*                            P U B L I C   D A T A
********************************************************************************
*/

/* Platform data */
struct conninfra_plat_data __weak mt6895_plat_data = {};

#ifdef CONFIG_OF
const struct of_device_id apconninfra_of_ids[] = {
	{
		.compatible = "mediatek,mt6895-consys",
	#if IS_ENABLED(CONFIG_MTK_COMBO_CHIP_CONSYS_6895)
		.data = (void*)&mt6895_plat_data,
	#endif
	},
	{}
};
#endif
