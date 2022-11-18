  /*
     Test that the function:
     int sigismember(const sigset_t *, int);
     is declared.
   */

#include <signal.h>

typedef int (*sigismember_test) (const sigset_t *, int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigismember_test  __attribute__((unused)) dummyvar;
	dummyvar = sigismember;
	return 0;
}
