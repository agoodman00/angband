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

#ifndef INCLUDED_BORG_REINCARNATE_H
#define INCLUDED_BORG_REINCARNATE_H

/*
 * must be included before ALLOW_BORG to avoid empty compilation unit
 */
#include "../angband.h"

#ifdef ALLOW_BORG


/*
 * Reincarnate the borg even when he isn't dead yet.
 */
extern void borg_force_reincarnate(void);

/*
 * Allow the borg to play continously.  Reset all values,
 */
extern void borg_reincarnate_start(void);

/*
 * End the reincarnation process, and set up the borg to continue playing
 */
extern void borg_reincarnate_end(void);

#endif
#endif
