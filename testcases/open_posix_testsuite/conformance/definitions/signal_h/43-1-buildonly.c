  /*
     Test that the function:
     int sigqueue(pid_t, int, const union sigval);
     is declared.
   */

#include <signal.h>
#include <sys/types.h>

typedef int (*sigqueue_test) (pid_t, int, const union sigval);

static int __attribute__((unused)) dummyfcn(void)
{
	sigqueue_test  __attribute__((unused)) dummyvar;
	dummyvar = sigqueue;
	return 0;
}
