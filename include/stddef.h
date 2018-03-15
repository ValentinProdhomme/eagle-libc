/*
 * Copyright 2018-03-15
 * Valentin PRODHOMME valentin@prodhomme.me
 *
 * This software is governed by the CeCILL-B license under French law and
 * abiding by the rules of distribution of free software.  You can  use,
 * modify and/ or redistribute the software under the terms of the CeCILL-B
 * license as circulated by CEA, CNRS and INRIA at the following URL
 * "http://www.cecill.info".
 *
 * The fact that you are presently reading this means that you have had
 * knowledge of the CeCILL-B license and that you accept its terms.
 */
#ifndef _STDDEF_H
#define _STDDEF_H 1

typedef signed long int ptrdiff_t;
typedef unsigned long int size_t;
typedef long double max_align_t;
typedef char wchar_t;

#define NULL ((void *)0x00)
#define offsetof(type,member_id) ((size_t)( (char *)&(((type *)0x00)->member_id) - (char *)0x00 ))

typedef size_t rsize_t;

#endif /* _STDDEF_H */
