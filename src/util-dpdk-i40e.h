/* Copyright (C) 2021 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/**
 * \file
 *
 * \author Lukas Sismis <lukas.sismis@gmail.com>
 */

#ifndef UTIL_DPDK_I40E_H
#define UTIL_DPDK_I40E_H

#include "suricata-common.h"
#include "util-dpdk.h"

#ifdef HAVE_DPDK

int i40eDeviceSetRSS(int port_id, int nb_rx_queues);
void i40eDeviceSetRSSHashFunction(uint64_t *rss_conf);

#endif /* HAVE_DPDK */

#endif /* UTIL_DPDK_I40E_H */