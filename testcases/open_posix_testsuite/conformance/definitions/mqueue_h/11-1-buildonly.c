/*
Test for the existence and valid prototype
of the mq_unlink function as specified on
line 9696 of the Base Definitions document
*/

#include <mqueue.h>
#include "posixtest.h"

static void __attribute__((unused)) test_mqueue_unlink_prototype(void)
{
	const char *name = "bogus";
	int err;

	err = mq_unlink(name);
	(void)err;
}
