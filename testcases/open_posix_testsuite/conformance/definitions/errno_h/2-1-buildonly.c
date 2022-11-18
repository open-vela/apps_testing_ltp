/*
 *The <errno.h> header shall provide a
 *declaration for errno
 *author:ysun@lnxw.com
 */

#include <errno.h>

static int __attribute__((unused)) errno_test;

static int __attribute__((unused)) dummyfcn(void)
{
	errno_test = errno;
	return 0;
}
