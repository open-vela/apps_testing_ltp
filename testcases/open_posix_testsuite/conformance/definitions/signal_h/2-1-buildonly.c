  /*
     Test the definition of SIG_DFL.
   */

#include <signal.h>

static void __attribute__((unused)) (*dummy) (int) = SIG_DFL;
