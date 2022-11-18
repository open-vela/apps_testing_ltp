  /*
     Test that the function:
     int pthread_kill(pthread_t, int);
     is declared.
   */

#include <pthread.h>
#include <signal.h>

typedef int (*pthread_kill_test) (pthread_t, int);

int main(void)
{
	pthread_kill_test  __attribute__((unused)) dummyvar;
	dummyvar = pthread_kill;
	return 0;
}
