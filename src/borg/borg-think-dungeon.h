/**
 *
 * Copyright (c) 1997 Ben Harrison, James E. Wilson, Robert A. Koeneke
 * Copyright (c) 2007-9 Andi Sidwell, Chris Carr, Ed Graham, Erik Osheim
 *
 * This work is free software; you can redistribute it and/or modify it
 * under the terms of either:
 *
 * a) the GNU General Public License as published by the Free Software
 *    Foundation, version 2, or
 *
 * b) the "Angband License":
 *    This software may be copied and distributed for educational, research,
 *    and not for profit purposes provided that this copyright and statement
 *    are included in all such copies.  Other copyrights may also apply.
 */

#ifndef INCLUDED_BORG_THINK_DUNGEON_H
#define INCLUDED_BORG_THINK_DUNGEON_H

/*
 * must be included before ALLOW_BORG to avoid empty compilation unit
 */
#include "../angband.h"

#ifdef ALLOW_BORG

/*
 * Current level "feeling"
 */
extern int  borg_feeling_danger;
extern int  borg_feeling_stuff;

extern bool borg_think_dungeon(void);

#endif
#endif