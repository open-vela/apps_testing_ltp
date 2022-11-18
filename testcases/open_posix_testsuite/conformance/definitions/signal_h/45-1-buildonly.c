  /*
     Test that the function:
     void (*sigset(int, void (*)(int)))(int);
     is declared.
   */

#include <signal.h>

typedef void (*(*sigset_test) (int, void (*)(int))) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigset_test  __attribute__((unused)) dummyvar;
	dummyvar = sigset;
	return 0;
}
