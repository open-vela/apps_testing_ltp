/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 * Test that the function:
 * void *shmat(int, const void *, int)
 * is declared.
 */

#include <sys/shm.h>

typedef void *(*shmat_test) (int, const void *, int);

static int __attribute__((unused)) dummyfcn(void)
{
	shmat_test __attribute__((unused)) dummyvar;
	dummyvar = shmat;
	return 0;
}
