  /*
     @:pt:XSI
     Test that the function:
     int sighold(int);
     is declared.
   */

#include <signal.h>

typedef int (*sighold_test) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	sighold_test  __attribute__((unused)) dummyvar;
	dummyvar = sighold;
	return 0;
}
