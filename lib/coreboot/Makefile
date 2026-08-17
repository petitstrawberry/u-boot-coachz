# SPDX-License-Identifier: GPL-2.0+
#
# Copyright (c) 2011 The Chromium OS Authors.
#
# (C) Copyright 2008
# Graeme Russ, 
#
# (C) Copyright 2006
# Wolfgang Denk, DENX Software Engineering, 
#
# (C) Copyright 2002
# Daniel Engström, Omicron Ceti AB, 

obj-$(CONFIG_$(XPL_)COREBOOT_SYSINFO) += cb_sysinfo.o
ifndef CONFIG_XPL_BUILD
obj-y += sdram.o
endif
obj-$(CONFIG_$(XPL_)COREBOOT_SYSINFO) += timestamp.o
