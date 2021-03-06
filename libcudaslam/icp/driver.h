/*
 * Copyright (C) 2009 Ziyan Zhou <zhou@ziyan.info>
 * Visit http://ziyan.info/ for more information
 *
 * This file is part of libcudaslam, CUDA-based SLaM library for Player.
 *
 * libcudaslam is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libcudaslam is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libcudaslam.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _LIBCUDASLAM_ICP_H_
#define _LIBCUDASLAM_ICP_H_

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <libplayercore/playercore.h>

namespace lcs
{
	class ICPDriver : public Driver
	{
	public:
		ICPDriver(ConfigFile* cf, int section);
		~ICPDriver();
		int Setup();
		int Shutdown();
		int ProcessMessage(QueuePointer & resp_queue, player_msghdr * hdr, void *data);

	private:
		void Main();
	};
}

#endif // _LIBCUDASLAM_ICP_H_

