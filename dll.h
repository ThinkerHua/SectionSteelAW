#ifndef _DLL_H_
#define _DLL_H_

#define BUILDING_DLL 1

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT char *SectionSteelAW(char const *RawText, unsigned const CtrlCode);
DLLIMPORT void free_dallocstr(char *str);
/*
	������ר��VBʹ�� 
	C���Կ�ֱ��ʹ��free�ͷŶ�̬������ַ��� 
*/

#endif
