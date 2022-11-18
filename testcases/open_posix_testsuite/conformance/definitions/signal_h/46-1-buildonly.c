  /*
     Test that the function:
     int sigsuspend(const sigset_t *);
     is declared.
   */

#include <signal.h>

typedef int (*sigsuspend_test) (const sigset_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	sigsuspend_test  __attribute__((unused)) dummyvar;
	dummyvar = sigsuspend;
	return 0;
}
