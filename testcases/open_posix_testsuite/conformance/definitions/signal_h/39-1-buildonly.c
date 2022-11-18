  /*
     Test that the function:
     void (*signal(int, void (*)(int)))(int);
     is declared.
   */

#include <signal.h>

typedef void (*(*signal_test) (int, void (*)(int))) (int);

static int __attribute__((unused)) dummyfcn(void)
{
	signal_test  __attribute__((unused)) dummyvar;
	dummyvar = signal;
	return 0;
}
