/*
 * Copyright (c) 2005, Bull S.A.. All rights reserved.
 * Created by:  Sebastien Decugis
 * This file is licensed under the GPL license.  For the full content
 * of this license, see the COPYING file at the top level of this
 * source tree.
 *
 * Based on original code by Julie N Fleischer.
 *
 * Test that the function below is defined:
 * int ftruncate(int fildes, off_t length);
 */

#include <unistd.h>
#include <sys/types.h>

typedef int (*ftruncate_test) (int fildes, off_t length);

static int __attribute__((unused)) dummyfcn(void)
{
	ftruncate_test __attribute__((unused)) dummyvar;
	dummyvar = ftruncate;
	return 0;
}
