  /*
     Test the definition of SIG_ERR.
   */

#include <signal.h>

static void __attribute__((unused)) (*dummy) (int) = SIG_ERR;
