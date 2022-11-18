  /*
     Test that the function:
     int kill(pid_t, int);
     is declared.
   */

#include <signal.h>
#include <sys/types.h>

typedef int (*kill_test) (pid_t, int);

static int __attribute__((unused)) dummyfcn(void)
{
	kill_test __attribute__((unused)) dummyvar;
	dummyvar = kill;
	return 0;
}
