#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT char *SectionSteelAW(char const *RawText, unsigned const CtrlCode);
DLLIMPORT void free_dallocstr(char *str);
/*
	������ר��VB.netʹ�� 
	C���Կ�ֱ��ʹ��free�ͷŶ�̬������ַ��� 
*/

#endif
