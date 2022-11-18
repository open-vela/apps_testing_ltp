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
 * int shm_unlink(const char *)
 * is declared.
 *
 * @pt:SHM
 */

#include <sys/mman.h>

typedef int (*shm_unlink_test) (const char *);

static int __attribute__((unused)) dummyfcn(void)
{
	shm_unlink_test __attribute__((unused)) dummyvar;
	dummyvar = shm_unlink;
	return 0;
}
