  /*
     Test that the function:
     int sigwaitinfo(const sigset_t *restrict, siginfo_t *restrict);
     is declared.
   */

#include <signal.h>

typedef int (*sigwaitinfo_test) (const sigset_t * restrict,
				 siginfo_t * restrict);

static int __attribute__((unused)) dummyfcn(void)
{
	sigwaitinfo_test  __attribute__((unused)) dummyvar;
	dummyvar = sigwaitinfo;
	return 0;
}
