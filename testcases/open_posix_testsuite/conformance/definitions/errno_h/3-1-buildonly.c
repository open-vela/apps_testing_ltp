/*
 * Following symbols need to be defined in errno.h
 * author:ysun@lnxw.com
 *
 * All #ifdef'ed constants are optional, depending on the spec definition.
 */

#include <errno.h>

static int __attribute__((unused)) dummy1 = E2BIG;
static int __attribute__((unused)) dummy2 = EACCES;
static int __attribute__((unused)) dummy3 = EADDRINUSE;
static int __attribute__((unused)) dummy4 = EADDRNOTAVAIL;
static int __attribute__((unused)) dummy5 = EAFNOSUPPORT;
static int __attribute__((unused)) dummy6 = EAGAIN;
static int __attribute__((unused)) dummy7 = EALREADY;
static int __attribute__((unused)) dummy8 = EBADF;
#ifdef EBADMSG
static int __attribute__((unused)) dummy9 = EBADMSG;
#endif
static int __attribute__((unused)) dummy10 = EBUSY;
static int __attribute__((unused)) dummy11 = ECANCELED;
static int __attribute__((unused)) dummy12 = ECHILD;
static int __attribute__((unused)) dummy13 = ECONNABORTED;
static int __attribute__((unused)) dummy14 = ECONNREFUSED;
static int __attribute__((unused)) dummy15 = ECONNRESET;
static int __attribute__((unused)) dummy16 = EDEADLK;
static int __attribute__((unused)) dummy17 = EDESTADDRREQ;
static int __attribute__((unused)) dummy18 = EDOM;
static int __attribute__((unused)) dummy19 = EDQUOT;
static int __attribute__((unused)) dummy20 = EEXIST;
static int __attribute__((unused)) dummy21 = EFAULT;
static int __attribute__((unused)) dummy22 = EFBIG;
static int __attribute__((unused)) dummy23 = EHOSTUNREACH;
static int __attribute__((unused)) dummy24 = EIDRM;
static int __attribute__((unused)) dummy25 = EILSEQ;
static int __attribute__((unused)) dummy26 = EINPROGRESS;
static int __attribute__((unused)) dummy27 = EINTR;
static int __attribute__((unused)) dummy28 = EINVAL;
static int __attribute__((unused)) dummy29 = EIO;
static int __attribute__((unused)) dummy30 = EISCONN;
static int __attribute__((unused)) dummy31 = EISDIR;
static int __attribute__((unused)) dummy32 = ELOOP;
static int __attribute__((unused)) dummy33 = EMFILE;
static int __attribute__((unused)) dummy34 = EMLINK;
static int __attribute__((unused)) dummy35 = EMSGSIZE;
static int __attribute__((unused)) dummy36 = EMULTIHOP;
static int __attribute__((unused)) dummy37 = ENAMETOOLONG;
static int __attribute__((unused)) dummy38 = ENETDOWN;
static int __attribute__((unused)) dummy39 = ENETRESET;
static int __attribute__((unused)) dummy40 = ENETUNREACH;
static int __attribute__((unused)) dummy41 = ENFILE;
static int __attribute__((unused)) dummy42 = ENOBUFS;
#ifdef ENODATA
static int __attribute__((unused)) dummy43 = ENODATA;
#endif
static int __attribute__((unused)) dummy44 = ENODEV;
static int __attribute__((unused)) dummy45 = ENOENT;
static int __attribute__((unused)) dummy46 = ENOEXEC;
static int __attribute__((unused)) dummy47 = ENOLCK;
static int __attribute__((unused)) dummy48 = ENOLINK;
static int __attribute__((unused)) dummy49 = ENOMEM;
static int __attribute__((unused)) dummy50 = ENOMSG;
static int __attribute__((unused)) dummy51 = ENOPROTOOPT;
static int __attribute__((unused)) dummy52 = ENOSPC;
#ifdef ENOSR
static int __attribute__((unused)) dummy53 = ENOSR;
#endif
#ifdef ENOSTR
static int __attribute__((unused)) dummy54 = ENOSTR;
#endif
static int __attribute__((unused)) dummy55 = ENOSYS;
static int __attribute__((unused)) dummy56 = ENOTCONN;
static int __attribute__((unused)) dummy57 = ENOTDIR;
static int __attribute__((unused)) dummy58 = ENOTEMPTY;
static int __attribute__((unused)) dummy59 = ENOTSOCK;
static int __attribute__((unused)) dummy60 = ENOTSUP;
static int __attribute__((unused)) dummy61 = ENOTTY;
static int __attribute__((unused)) dummy62 = ENXIO;
static int __attribute__((unused)) dummy63 = EOPNOTSUPP;
static int __attribute__((unused)) dummy64 = EOVERFLOW;
static int __attribute__((unused)) dummy65 = EPERM;
static int __attribute__((unused)) dummy66 = EPIPE;
static int __attribute__((unused)) dummy67 = EPROTO;
static int __attribute__((unused)) dummy68 = EPROTONOSUPPORT;
static int __attribute__((unused)) dummy69 = EPROTOTYPE;
static int __attribute__((unused)) dummy70 = ERANGE;
static int __attribute__((unused)) dummy71 = EROFS;
static int __attribute__((unused)) dummy72 = ESPIPE;
static int __attribute__((unused)) dummy73 = ESRCH;
static int __attribute__((unused)) dummy74 = ESTALE;
#ifdef ETIME
static int __attribute__((unused)) dummy75 = ETIME;
#endif
static int __attribute__((unused)) dummy76 = ETIMEDOUT;
static int __attribute__((unused)) dummy77 = ETXTBSY;
static int __attribute__((unused)) dummy78 = EWOULDBLOCK;
static int __attribute__((unused)) dummy79 = EXDEV;
