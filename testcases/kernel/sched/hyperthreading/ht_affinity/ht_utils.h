
#ifndef _HTUTILS_H_
#define _HTUTILS_H_

#include <stdlib.h>
#include <sys/types.h>

int is_cmdline_para(const char *para);

// return 0 means Pass,
// return 1 means ht is not enabled,
static int check_ht_capability();

static char buf[];

static int get_cpu_count();
static int get_current_cpu(pid_t pid);

#endif
