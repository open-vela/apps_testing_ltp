  /*
     Test that the function:
     int sigaltstack(const stack_t *restrict, stack_t *restrict);
     is declared.

     Removed restrict keyword from typedef.
   */

#include <signal.h>

typedef int (*sigaltstack_test) (const stack_t *, stack_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	sigaltstack_test  __attribute__((unused)) dummyvar;
	dummyvar = sigaltstack;
	return 0;
}
