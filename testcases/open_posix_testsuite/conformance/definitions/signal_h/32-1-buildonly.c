  /*
     Test that the function:
     int sigdelset(sigset_t *, int);
     is declared.
   */

#include <signal.h>

typedef int (*sigdelset_test) (sigset_t *, int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigdelset_test  __attribute__((unused)) dummyvar;
	dummyvar = sigdelset;
	return 0;
}
