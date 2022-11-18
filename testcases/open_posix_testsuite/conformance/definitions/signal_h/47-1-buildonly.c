  /*
     @pt:RTS
     Test that the function:
     int sigtimedwait(const sigset_t *restrict, siginfo_t *restrict,
     const struct timespec *restrict);
     is declared.
   */

#include <signal.h>

typedef int (*sigtimedwait_test) (const sigset_t * restrict,
				  siginfo_t * restrict,
				  const struct timespec * restrict);

static int __attribute__((unused)) dummyfcn(void)
{
	sigtimedwait_test  __attribute__((unused)) dummyvar;
	dummyvar = sigtimedwait;
	return 0;
}
