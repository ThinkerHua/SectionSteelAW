#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#define TYPE_AREA			0B00000001
#define TYPE_TOPSURFACE		0B00000010
#define TYPE_WEIGHT			0B00000100
#define METHOD_ROUGHLY		0B00001000
#define METHOD_PRECISELY	0B00010000
#define METHOD_LOOKUP		0B00100000

//typedef struct {
//	/*AorW = 0 -> area
//	  AorW = 1 -> Weight*/
//	unsigned AorW : 1;
//	/*TopSurface = 0 -> Exclude TopSurface
//	  TopSurface = 1 -> Include TopSurface*/
//	unsigned TopSurface : 1;
//	/*Method = 0 -> Roughly
//	  Method = 1 -> Precisely
//	  Method = 2 -> Look up in table*/
//	unsigned Method : 2;
//}ControlCode;

int Formatting(char const *RawText, char *FormatedText);
/*
	����ֵ	1	��ʽ���ɹ���
			0	��ʽ��ʧ�ܡ�
*/
struct replaceinfo {
	char *from;
	char *to;
};
int replace(char *str, char const *from, char const *to);
/*
	����ֵ	1	�滻�ɹ���
			0	�滻ʧ�ܡ�
*/
char *getSecSteType(char const *FormatedText);
void QSortStrArr(char *strarr[], int const left, int const right, int (*compare)(char const *str1, char const *str2));
void swap(void *op1, void *op2);
int strcmp_X(char const *str1, char const *str2);
/*
	����ֵ	1	str1>str2;
			0	str1=str2;
			-1	str1<str2.
	˵�����ȱȽ������ַ����ĳ��ȣ����Ƚϴ���ַ������ڳ��Ƚ�С���ַ�����
		�������ʱ������׼�⺯��strcmp�Ĺ�����бȽϡ� 
*/
void *NewObj(char const *SecSteType);
void FreeObj(void *obj, char const *SecSteType);
int setdata(void *obj, char const *SecSteType, char const *FormatedText);
/*
	����ֵ	1	obj�������óɹ���
			0	obj��������ʧ�ܡ�
*/
char *getResault(void *obj, char const *SecSteType, unsigned const CtrlCode);
/*
	����CtrlCode�������λ�����λλ��
		0	=1������������λ��2���⣨���⣺������ͬʱΪ1������Ϊδ������Ϊ����ͬ�� 
		1	λ��0�ĸ���ѡ���λ��0Ϊ1ʱ��������
			=1������ۼ�����
			=0��������ۼ�����
		2	=1�������������λ��0����
		3	=1����д��Լ��㣬��λ��4��5����
		4	=1����о�ϸ���㣬��λ��3��5����
		5	=1����в����㣬��λ��3��4���� 
*/

#endif
