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
 * int shmctl(int, int, struct shmid_ds *)
 * is declared.
 */

#include <sys/shm.h>

typedef int (*shmctl_test) (int, int, struct shmid_ds *);

static int __attribute__((unused)) dummyfcn(void)
{
	shmctl_test __attribute__((unused)) dummyvar;
	dummyvar = shmctl;
	return 0;
}
