  /*
     @:pt:CX
     Test that the function:
     int sigpending(sigset_t *);
     is declared.
   */

#include <signal.h>

typedef int (*sigpending_test) (sigset_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	sigpending_test  __attribute__((unused)) dummyvar;
	dummyvar = sigpending;
	return 0;
}
