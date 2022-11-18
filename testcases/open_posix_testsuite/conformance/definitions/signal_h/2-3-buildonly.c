  /*
     @pt:CX

     Test the definition of SIG_HOLD.
   */

#include <signal.h>

static void  __attribute__((unused)) (*dummy) (int) = SIG_HOLD;
