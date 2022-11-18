  /*
     Test that the function:
     int pthread_sigmask(int, const sigset_t *, sigset_t *);
     is declared.
   */

#include <signal.h>

typedef int (*pthread_sigmask_test) (int, const sigset_t *, sigset_t *);

static int __attribute__((unused)) dummyfcn(void)
{
	pthread_sigmask_test  __attribute__((unused)) dummyvar;
	dummyvar = pthread_sigmask;
	return 0;
}
