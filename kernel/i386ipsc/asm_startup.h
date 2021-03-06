/* 
 * Mach Operating System
 * Copyright (c) 1991 Carnegie Mellon University
 * All Rights Reserved.
 * 
 * Permission to use, copy, modify and distribute this software and its
 * documentation is hereby granted, provided that both the copyright
 * notice and this permission notice appear in all copies of the
 * software, derivative works or modified versions, and any portions
 * thereof, and that both notices appear in supporting documentation.
 * 
 * CARNEGIE MELLON ALLOWS FREE USE OF THIS SOFTWARE IN ITS "AS IS"
 * CONDITION.  CARNEGIE MELLON DISCLAIMS ANY LIABILITY OF ANY KIND FOR
 * ANY DAMAGES WHATSOEVER RESULTING FROM THE USE OF THIS SOFTWARE.
 * 
 * Carnegie Mellon requests users of this software to return to
 * 
 *  Software Distribution Coordinator  or  Software.Distribution@CS.CMU.EDU
 *  School of Computer Science
 *  Carnegie Mellon University
 *  Pittsburgh PA 15213-3890
 * 
 * any improvements or extensions that they make and grant Carnegie Mellon
 * the rights to redistribute these changes.
 */
/*
 * Copyright 1988, 1989, 1990, 1991 by Intel Corporation,
 * Santa Clara, California.
 * 
 *                          All Rights Reserved
 * 
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted,
 * provided that the above copyright notice appears in all copies and that
 * both the copyright notice and this permission notice appear in
 * supporting documentation, and that the name of Intel not be used in
 * advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.
 * 
 * INTEL DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING
 * ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO EVENT
 * SHALL INTEL BE LIABLE FOR ANY SPECIAL, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN ACTION OF CONTRACT, NEGLIGENCE, OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
 * THIS SOFTWARE.
 */
/*
 * HISTORY
 * $Log:	asm_startup.h,v $
 * Revision 2.7  92/01/03  20:12:03  dbg
 * 	Symbols are no longer read separately by boot loader.
 * 	[91/12/18            dbg]
 * 
 * Revision 2.6  91/12/10  16:29:47  jsb
 * 	Fixes from Intel
 * 	[91/12/10  15:32:05  jsb]
 * 
 * Revision 2.5  91/06/18  20:49:58  jsb
 * 	New copyright from Intel.
 * 	[91/06/18  20:05:19  jsb]
 * 
 * Revision 2.4  91/06/17  15:44:04  jsb
 * 	Enabled support for new boot protocol, and eliminated support for old.
 * 	[91/06/17  10:00:10  jsb]
 * 
 * Revision 2.3  91/06/06  17:04:13  jsb
 * 	Added support for Paul's new bootstrapper.
 * 	[91/05/13  16:58:04  jsb]
 * 
 * Revision 2.2  91/05/08  12:45:07  dbg
 * 	Created (from old i386/start.s).
 * 	[91/04/26  14:40:58  dbg]
 * 
 */

/*
 * Get parameters for iPSC386.
 */
	popl	_boottype+KVTOPHYS	/ get boottype
	popl	_ipsc_basemem+KVTOPHYS	/ physical memory in K
	popl	_ipsc_physnode+KVTOPHYS	/ physical node number
	popl	_ipsc_slot+KVTOPHYS	/ physical slot number
	popl	_boothowto+KVTOPHYS	/ boothowto
	popl	_tmp_bootenv+KVTOPHYS	/ bootenv
	popl	_md_size+KVTOPHYS	/ get size
