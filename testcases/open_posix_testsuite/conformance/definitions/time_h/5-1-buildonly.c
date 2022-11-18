/*
 * Copyright (c) 2002, Intel Corporation. All rights reserved.
 * Created by:  julie.n.fleischer REMOVE-THIS AT intel DOT com
 * This file is licensed under the GPL license.  For the full content
 * of this license, see the COPYING file at the top level of this
 * source tree.

 * Test that itimerspec structure is declared.
 */
#include <time.h>

static struct itimerspec __attribute__((unused)) this_type_should_exist, t;

static int __attribute__((unused)) dummyfcn(void)
{
	struct timespec __attribute__((unused)) interval;
	struct timespec __attribute__((unused)) value;

	interval = t.it_interval;
	value = t.it_value;
	return 0;
}
