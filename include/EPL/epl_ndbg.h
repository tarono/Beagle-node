#ifndef EPL_NDBG_H_
#define EPL_NDBG_H_

/*
 * �n�}�� wireless debug mode�A�ШϥΥH�Ucode:
 * 
 * #define WIRELESS_DEBUGER
 * 
 * #ifndef WIRELESS_DEBUGER
 * 	#include <EPL/epl_ndbg.h> 
 * #else
 * 	#include <EPL/epl_dbg.h>
 * #endif
 * 
 * �p�G���ݭn�^�� debug message �u�ݧ� "#define WIRELESS_DEBUGER" ���ѱ��Y�i
 * ���ݱNprint����
 *
 * P.S ���䴩 RF debug
 */

#define epl_dbg_init() ((void)0)
#define epl_dbg_print(a,b) ((void)0)

#endif /*EPL_NDBG_H_*/
