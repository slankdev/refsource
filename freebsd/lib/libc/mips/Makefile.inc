#	$NetBSD: Makefile.inc,v 1.7 2005/09/17 11:49:39 tsutsui Exp $
# $FreeBSD: releng/10.1/lib/libc/mips/Makefile.inc 209233 2010-06-16 14:13:36Z jchandra $

CFLAGS+=-DSOFTFLOAT

MDSRCS+= machdep_ldisd.c
SYM_MAPS+= ${.CURDIR}/mips/Symbol.map