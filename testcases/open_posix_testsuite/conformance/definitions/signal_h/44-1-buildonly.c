  /*
     Test that the function:
     int sigrelse(int);
     is declared.
   */

#include <signal.h>

typedef int (*sigrelse_test) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	sigrelse_test  __attribute__((unused)) dummyvar;
	dummyvar = sigrelse;
	return 0;
}
