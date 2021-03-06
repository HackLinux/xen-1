/*
 * include/asm-x86/monitor.h
 *
 * Architecture-specific monitor_op domctl handler.
 *
 * Copyright (c) 2015 Tamas K Lengyel (tamas@tklengyel.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License v2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 021110-1307, USA.
 */

#ifndef __ASM_X86_MONITOR_H__
#define __ASM_X86_MONITOR_H__

struct domain;
struct xen_domctl_monitor_op;

#define monitor_ctrlreg_bitmask(ctrlreg_index) (1U << (ctrlreg_index))

int monitor_domctl(struct domain *d, struct xen_domctl_monitor_op *op);

#endif /* __ASM_X86_MONITOR_H__ */
