/*
 * Copyright (c) 2004, Bull SA. All rights reserved.
 * Created by:  Laurent.Vivier@bull.net
 * This file is licensed under the GPL license.  For the full content
 * of this license, see the COPYING file at the top level of this
 * source tree.
 */

 /* test if aio.h exists and can be included */

#include <aio.h>

static int __attribute__((unused)) dummy0 = AIO_ALLDONE;
static int __attribute__((unused)) dummy1 = AIO_CANCELED;
static int __attribute__((unused)) dummy2 = AIO_NOTCANCELED;
static int __attribute__((unused)) dummy3 = LIO_NOP;
static int __attribute__((unused)) dummy4 = LIO_NOWAIT;
static int __attribute__((unused)) dummy5 = LIO_READ;
static int __attribute__((unused)) dummy6 = LIO_WAIT;
static int __attribute__((unused)) dummy7 = LIO_WRITE;
