  /*
   * Copyright (c) 2002, Intel Corporation. All rights reserved.
   * Created by:  julie.n.fleischer REMOVE-THIS AT intel DOT com
   * This file is licensed under the GPL license.  For the full content
   * of this license, see the COPYING file at the top level of this
   * source tree.

   Test that timezone is declared.
   */

#include <time.h>

static int __attribute__((unused)) dummyfcn(void)
{
	long __attribute__((unused)) dummy;

	dummy = timezone;
	return 0;
}
