  /*
     Test that the function:
     int sigaddset(sigset_t *, int);
     is declared.
   */

#include <signal.h>

typedef int (*sigaddset_test) (sigset_t *, int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigaddset_test  __attribute__((unused)) dummyvar;
	dummyvar = sigaddset;
	return 0;
}
