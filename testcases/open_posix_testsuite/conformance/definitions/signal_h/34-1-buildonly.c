  /*
     Test that the function:
     int sigfillset(sigset_t *);
     is declared.
   */

#include <signal.h>

typedef int (*sigfillset_test) (sigset_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	sigfillset_test  __attribute__((unused)) dummyvar;
	dummyvar = sigfillset;
	return 0;
}
