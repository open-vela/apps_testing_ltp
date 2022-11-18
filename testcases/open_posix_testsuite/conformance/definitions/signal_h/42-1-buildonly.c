  /*
     Test that the function:
     int sigprocmask(int, const sigset_t *restrict, sigset_t *restrict);
     is declared.
     Removed restrict keyword from typedef.
   */

#include <signal.h>

typedef int (*sigprocmask_test) (int, const sigset_t *, sigset_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	sigprocmask_test  __attribute__((unused)) dummyvar;
	dummyvar = sigprocmask;
	return 0;
}
