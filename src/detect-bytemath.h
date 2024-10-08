/* Copyright (C) 2020 Open Information Security Foundation
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
 * \author Jeff Lucovsky <jeff@lucovsky.org>
 */

#ifndef __DETECT_BYTEMATH_H__
#define __DETECT_BYTEMATH_H__

void DetectBytemathRegister(void);

SigMatch *DetectByteMathRetrieveSMVar(const char *, const Signature *);
int DetectByteMathDoMatch(DetectEngineThreadCtx *, const DetectByteMathData *, const Signature *,
        const uint8_t *, const uint32_t, uint8_t, uint64_t, uint64_t *, uint8_t);

#endif /* __DETECT_BYTEMATH_H__ */
