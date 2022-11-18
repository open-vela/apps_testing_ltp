  /*
     Test that the function:
     int raise(int);
     is declared.
   */

#include <signal.h>

typedef int (*raise_test) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	raise_test  __attribute__((unused)) dummyvar;
	dummyvar = raise;
	return 0;
}
