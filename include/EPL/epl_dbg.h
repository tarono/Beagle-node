//Author : Brian Yang <asdyaya@gmail.com> 

#ifndef EPL_DBG_H_
#define EPL_DBG_H_
	
#include <Nordic/reg24le1.h>
#include <EPL/epl_rf_en.h>
#include <stdint.h>

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

void epl_dbg_init();
void epl_dbg_print(uint8_t *pload, uint8_t size);


#endif /*EPL_DBG_H_*/

	





