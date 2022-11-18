  /*
     @:pt:XSI
     Test that the function:
     int sigignore(int);
     is declared.
   */

#include <signal.h>

typedef int (*sigignore_test) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigignore_test  __attribute__((unused)) dummyvar;
	dummyvar = sigignore;
	return 0;
}
