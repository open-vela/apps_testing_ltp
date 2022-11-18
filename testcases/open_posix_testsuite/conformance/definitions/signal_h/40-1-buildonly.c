  /*
     @:pt:XSI
     Test that the function:
     int sigpause(int);
     is declared.
   */

#include <signal.h>

typedef int (*sigpause_test) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigpause_test  __attribute__((unused)) dummyvar;
	dummyvar = sigpause;
	return 0;
}
