// SPDX-License-Identifier: GPL-2.0

#include <cpu_func.h>
#include <init.h>
#include <asm/system.h>

int board_early_init_f(void)
{
	/*
	 * Depthcharge's altfw path may enter the payload with its MMU and
	 * data cache still enabled. U-Boot's ARM64 entry contract requires
	 * both to be disabled before U-Boot installs its own translation
	 * tables.
	 */
	if (dcache_status())
		dcache_disable();

	/* dcache_disable() is a no-op when only the MMU is enabled. */
	if (mmu_status()) {
		set_sctlr(get_sctlr() & ~CR_M);
		__asm_invalidate_tlb_all();
	}

	return 0;
}
