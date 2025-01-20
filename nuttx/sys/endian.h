/*
 * Copyright (C) 2024 Xiaomi Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* sys/endian.h */

#ifndef _SYS_ENDIAN_H
#define _SYS_ENDIAN_H

#include_next <sys/endian.h>

/* the following function declaration to handle -Wimplicit-function-declaration build
 * warnings
 */

#ifdef CONFIG_ENDIAN_BIG
#  define __LONG_LONG_PAIR(HI, LO) HI, LO
#else
#  define __LONG_LONG_PAIR(HI, LO) LO, HI
#endif

#endif /* _SYS_ENDIAN_H */
