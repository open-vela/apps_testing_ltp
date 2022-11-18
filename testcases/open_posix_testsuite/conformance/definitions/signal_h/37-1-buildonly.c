  /*
     Test that the function:
     int siginterrupt(int, int);
     is declared.
   */

#include <signal.h>

typedef int (*siginterrupt_test) (int, int);

static int __attribute__((unused)) dummyfcn(void)
{
	siginterrupt_test  __attribute__((unused)) dummyvar;
	dummyvar = siginterrupt;
	return 0;
}
