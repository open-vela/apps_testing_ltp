  /*
     Test that the function:
     int sigemptyset(sigset_t *);
     is declared.
   */

#include <signal.h>

typedef int (*sigemptyset_test) (sigset_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	sigemptyset_test  __attribute__((unused)) dummyvar;
	dummyvar = sigemptyset;
	return 0;
}
