/*
 * Copyright (c) International Business Machines  Corp., 2001
 *  07/2001 Ported by Wayne Boyer
 *
 * This program is free software;  you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY;  without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program;  if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/*
 * DESCRIPTION
 *	Test that closing a regular file and a pipe works correctly
 */

#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "test.h"
#include "safe_macros.h"

static void cleanup(void);
static void setup(void);

static char *TCID = "close01";
static int TST_TOTAL = 2;

static char fname[40] = "";

static int fild, newfd, pipefildes[2];

static struct test_case_t {
	int *fd;
	char *type;
} TC[] = {
	/* file descriptor for a regular file */
	{
	&newfd, "file"},
	    /* file descriptor for a pipe */
	{
	&pipefildes[0], "pipe"}
};

int main(int ac, char **av)
{

	int i;
	int lc;

	tst_parse_opts(ac, av, NULL, NULL);

	setup();

	for (lc = 0; TEST_LOOPING(lc); lc++) {

		tst_count = 0;

		if ((fild = creat(fname, 0777)) == -1)
			tst_brkm(TBROK | TERRNO, cleanup, "can't open file %s",
				 fname);

		if ((newfd = dup(fild)) == -1)
			tst_brkm(TBROK | TERRNO, cleanup,
				 "can't dup the file des");

		SAFE_PIPE(cleanup, pipefildes);

		for (i = 0; i < TST_TOTAL; i++) {

			TEST(close(*TC[i].fd));

			if (TEST_RETURN == -1) {
				tst_resm(TFAIL, "call failed unexpectedly");
				continue;
			}

			if (close(*TC[i].fd) == -1) {
				tst_resm(TPASS, "%s appears closed",
					 TC[i].type);
			} else {
				tst_resm(TFAIL, "%s close succeeded on"
					 "second attempt", TC[i].type);
			}
		}

	}

	cleanup();
	tst_exit();
}

static void setup(void)
{
	int mypid;

	tst_sig(FORK, DEF_HANDLER, cleanup);

	umask(0);

	TEST_PAUSE;

	tst_tmpdir();

	mypid = getpid();
	sprintf(fname, "fname.%d", mypid);
}

static void cleanup(void)
{
	close(fild);

	tst_rmdir();

}
