  /*
     Test that the function:
     int sigwait(const sigset_t *restrict, int *restrict);
     is declared.
   */

#include <signal.h>

typedef int (*sigwait_test) (const sigset_t * restrict, int *restrict);

static int __attribute__((unused)) dummyfcn(void)
{
	sigwait_test  __attribute__((unused)) dummyvar;
	dummyvar = sigwait;
	return 0;
}
