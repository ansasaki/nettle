/* sha3-internal.h

   The sha3 hash function (aka Keccak).

   Copyright (C) 2012 Niels Möller

   This file is part of GNU Nettle.

   GNU Nettle is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.

   GNU Nettle is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see http://www.gnu.org/licenses/.
*/

#ifndef NETTLE_SHA3_INTERNAL_H_INCLUDED
#define NETTLE_SHA3_INTERNAL_H_INCLUDED

#include "nettle-types.h"

#define _sha3_update _nettle_sha3_update
#define _sha3_pad _nettle_sha3_pad

unsigned
_sha3_update (struct sha3_state *state,
	      unsigned block_size, uint8_t *block,
	      unsigned pos,
	      size_t length, const uint8_t *data);
void
_sha3_pad (struct sha3_state *state,
	   unsigned block_size, uint8_t *block, unsigned pos);


#endif
