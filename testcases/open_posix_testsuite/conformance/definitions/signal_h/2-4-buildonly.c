  /*
     Test the definition of SIG_IGN.
   */

#include <signal.h>

static void  __attribute__((unused)) (*dummy) (int) = SIG_IGN;
