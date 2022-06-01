#include "GBData.h"
#include "SectionSteel.h"
#include <stdlib.h>
#include <string.h>

_SectionSteel_H *new_H_ (void) {
	_SectionSteel_H *obj;
	obj = (_SectionSteel_H *)malloc(sizeof(_SectionSteel_H));
	return obj;
}

SectionSteel_H *new_H (void) {
	SectionSteel_H *obj;
	obj = (SectionSteel_H *)malloc(sizeof(SectionSteel_H));
	return obj;
}

SectionSteel_HT *new_HT (void) {
	SectionSteel_HT *obj;
	obj = (SectionSteel_HT *)malloc(sizeof(SectionSteel_HT));
	return obj;
}

SectionSteel_HI *new_HI (void) {
	SectionSteel_HI *obj;
	obj = (SectionSteel_HI *)malloc(sizeof(SectionSteel_HI));
	return obj;
}

SectionSteel_T *new_T (void) {
	SectionSteel_T *obj;
	obj = (SectionSteel_T *)malloc(sizeof(SectionSteel_T));
	return obj;
}

SectionSteel_J *new_J (void) {
	SectionSteel_J *obj;
	obj = (SectionSteel_J *)malloc(sizeof(SectionSteel_J));
	return obj;
}

SectionSteel_D *new_D (void) {
	SectionSteel_D *obj;
	obj = (SectionSteel_D *)malloc(sizeof(SectionSteel_D));
	return obj;
}

SectionSteel_I *new_I (void) {
	SectionSteel_I *obj;
	obj = (SectionSteel_I *)malloc(sizeof(SectionSteel_I));
	return obj;
}

SectionSteel_Chan *new_Chan (void) {
	SectionSteel_Chan *obj;
	obj = (SectionSteel_Chan *)malloc(sizeof(SectionSteel_Chan));
	return obj;
}

SectionSteel_Chan_MtM *new_Chan_MtM (void) {
	SectionSteel_Chan_MtM *obj;
	obj = (SectionSteel_Chan_MtM *)malloc(sizeof(SectionSteel_Chan_MtM));
	return obj;
}

SectionSteel_Chan_BtB *new_Chan_BtB (void) {
	SectionSteel_Chan_BtB *obj;
	obj = (SectionSteel_Chan_BtB *)malloc(sizeof(SectionSteel_Chan_BtB));
	return obj;
}

SectionSteel_L *new_L (void) {
	SectionSteel_L *obj;
	obj = (SectionSteel_L *)malloc(sizeof(SectionSteel_L));
	return obj;
}

SectionSteel_2L *new_2L (void) {
	SectionSteel_2L *obj;
	obj = (SectionSteel_2L *)malloc(sizeof(SectionSteel_2L));
	return obj;
}

SectionSteel_C *new_C (void) {
	SectionSteel_C *obj;
	obj = (SectionSteel_C *)malloc(sizeof(SectionSteel_C));
	return obj;
}

SectionSteel_2C *new_2C (void) {
	SectionSteel_2C *obj;
	obj = (SectionSteel_2C *)malloc(sizeof(SectionSteel_2C));
	return obj;
}

SectionSteel_Z *new_Z (void) {
	SectionSteel_Z *obj;
	obj = (SectionSteel_Z *)malloc(sizeof(SectionSteel_Z));
	return obj;
}

_SectionSteel_PL *new_PL_ (void) {
	_SectionSteel_PL *obj;
	obj = (_SectionSteel_PL *)malloc(sizeof(_SectionSteel_PL));
	return obj;
}

_SectionSteel_PLT *new_PLT_ (void) {
	_SectionSteel_PLT *obj;
	obj = (_SectionSteel_PLT *)malloc(sizeof(_SectionSteel_PLT));
	return obj;
}

_SectionSteel_PLD *new_PLD_ (void) {
	_SectionSteel_PLD *obj;
	obj = (_SectionSteel_PLD *)malloc(sizeof(_SectionSteel_PLD));
	return obj;
}

SectionSteel_PL *new_PL (void) {
	SectionSteel_PL *obj;
	obj = (SectionSteel_PL *)malloc(sizeof(SectionSteel_PL));
	return obj;
}

SectionSteel_PLT *new_PLT (void) {
	SectionSteel_PLT *obj;
	obj = (SectionSteel_PLT *)malloc(sizeof(SectionSteel_PLT));
	return obj;
}

SectionSteel_PLD *new_PLD (void) {
	SectionSteel_PLD *obj;
	obj = (SectionSteel_PLD *)malloc(sizeof(SectionSteel_PLD));
	return obj;
}

void free_H_(void *object) {
	free(object);
}

void free_H(void *object) {
	free(object);
}

void free_HT(void *object) {
	free(object);
}

void free_HI(void *object) {
	free(object);
}

void free_T(void *object) {
	free(object);
}

void free_J(void *object) {
	free(object);
}

void free_D(void *object) {
	free(object);
}

void free_I(void *object) {
	free(object);
}

void free_Chan(void *object) {
	free(object);
}

void free_Chan_MtM(void *object) {
	free(object);
}

void free_Chan_BtB(void *object) {
	free(object);
}

void free_L(void *object) {
	free(object);
}

void free_2L(void *object) {
	free(object);
}

void free_C(void *object) {
	free(object);
}

void free_2C(void *object) {
	free(object);
}

void free_Z(void *object) {
	free(object);
}

void free_PL_(void *object) {
	free(object);
}

void free_PLT_(void *object) {
	free(object);
}

void free_PLD_(void *object) {
	free(object);
}

void free_PL(void *object) {
	free(object);
}

void free_PLT(void *object) {
	free(object);
}

void free_PLD(void *object) {
	free(object);
}

int setData_H_(void *object, char const *FormatedText) {
	int nums;
	double data[4];
	char **strarr;
	_SectionSteel_H *obj; 
	obj = (_SectionSteel_H *)object;
	//����ǰ�����ͱ�ʶ��H 
	nums = strsplit(FormatedText + 1, "*", &strarr);
	switch(nums) {
		case 2:
			obj->ShortH = atof(strarr[0]);
			obj->ShortB = atof(strarr[1]);
			
			break;
		case 4:
			obj->H = average_delim(strarr[0], "~");
			obj->B = average_delim(strarr[1], "~");
			obj->tB = atof(strarr[2]);
			obj->tH = atof(strarr[3]);
			break;
		default:
			break;
	}
}

int setData_H(void *object, char const *FormatedText) {

}

int setData_HT(void *object, char const *FormatedText) {

}

int setData_HI(void *object, char const *FormatedText) {

}

int setData_T(void *object, char const *FormatedText) {

}

int setData_J(void *object, char const *FormatedText) {

}

int setData_D(void *object, char const *FormatedText) {

}

int setData_I(void *object, char const *FormatedText) {

}

int setData_Chan(void *object, char const *FormatedText) {

}

int setData_Chan_MtM(void *object, char const *FormatedText) {

}

int setData_Chan_BtB(void *object, char const *FormatedText) {

}

int setData_L(void *object, char const *FormatedText) {

}

int setData_2L(void *object, char const *FormatedText) {

}

int setData_C(void *object, char const *FormatedText) {

}

int setData_2C(void *object, char const *FormatedText) {

}

int setData_Z(void *object, char const *FormatedText) {

}

int setData_PL_(void *object, char const *FormatedText) {

}

int setData_PLT_(void *object, char const *FormatedText) {

}

int setData_PLD_(void *object, char const *FormatedText) {

}

int setData_PL(void *object, char const *FormatedText) {

}

int setData_PLT(void *object, char const *FormatedText) {

}

int setData_PLD(void *object, char const *FormatedText) {

}

char *getResault_H_(void *object, unsigned const CtrlCode) {

}

char *getResault_H(void *object, unsigned const CtrlCode) {

}

char *getResault_HT(void *object, unsigned const CtrlCode) {

}

char *getResault_HI(void *object, unsigned const CtrlCode) {

}

char *getResault_T(void *object, unsigned const CtrlCode) {

}

char *getResault_J(void *object, unsigned const CtrlCode) {

}

char *getResault_D(void *object, unsigned const CtrlCode) {

}

char *getResault_I(void *object, unsigned const CtrlCode) {

}

char *getResault_Chan(void *object, unsigned const CtrlCode) {

}

char *getResault_Chan_MtM(void *object, unsigned const CtrlCode) {

}

char *getResault_Chan_BtB(void *object, unsigned const CtrlCode) {

}

char *getResault_L(void *object, unsigned const CtrlCode) {

}

char *getResault_2L(void *object, unsigned const CtrlCode) {

}

char *getResault_C(void *object, unsigned const CtrlCode) {

}

char *getResault_2C(void *object, unsigned const CtrlCode) {

}

char *getResault_Z(void *object, unsigned const CtrlCode) {

}

char *getResault_PL_(void *object, unsigned const CtrlCode) {

}

char *getResault_PLT_(void *object, unsigned const CtrlCode) {

}

char *getResault_PLD_(void *object, unsigned const CtrlCode) {

}

char *getResault_PL(void *object, unsigned const CtrlCode) {

}

char *getResault_PLT(void *object, unsigned const CtrlCode) {

}

char *getResault_PLD(void *object, unsigned const CtrlCode) {

}

char *getArea_H_(void *object, unsigned const CtrlCode) {

}

char *getArea_H(void *object, unsigned const CtrlCode) {

}

char *getArea_HT(void *object, unsigned const CtrlCode) {

}

char *getArea_HI(void *object, unsigned const CtrlCode) {

}

char *getArea_T(void *object, unsigned const CtrlCode) {

}

char *getArea_J(void *object, unsigned const CtrlCode) {

}

char *getArea_D(void *object, unsigned const CtrlCode) {

}

char *getArea_I(void *object, unsigned const CtrlCode) {

}

char *getArea_Chan(void *object, unsigned const CtrlCode) {

}

char *getArea_Chan_MtM(void *object, unsigned const CtrlCode) {

}

char *getArea_Chan_BtB(void *object, unsigned const CtrlCode) {

}

char *getArea_L(void *object, unsigned const CtrlCode) {

}

char *getArea_2L(void *object, unsigned const CtrlCode) {

}

char *getArea_C(void *object, unsigned const CtrlCode) {

}

char *getArea_2C(void *object, unsigned const CtrlCode) {

}

char *getArea_Z(void *object, unsigned const CtrlCode) {

}

char *getArea_PL_(void *object, unsigned const CtrlCode) {

}

char *getArea_PLT_(void *object, unsigned const CtrlCode) {

}

char *getArea_PLD_(void *object, unsigned const CtrlCode) {

}

char *getArea_PL(void *object, unsigned const CtrlCode) {

}

char *getArea_PLT(void *object, unsigned const CtrlCode) {

}

char *getArea_PLD(void *object, unsigned const CtrlCode) {

}


char *getWeight_H_(void *object, unsigned const CtrlCode) {

}

char *getWeight_H(void *object, unsigned const CtrlCode) {

}

char *getWeight_HT(void *object, unsigned const CtrlCode) {

}

char *getWeight_HI(void *object, unsigned const CtrlCode) {

}

char *getWeight_T(void *object, unsigned const CtrlCode) {

}

char *getWeight_J(void *object, unsigned const CtrlCode) {

}

char *getWeight_D(void *object, unsigned const CtrlCode) {

}

char *getWeight_I(void *object, unsigned const CtrlCode) {

}

char *getWeight_Chan(void *object, unsigned const CtrlCode) {

}

char *getWeight_Chan_MtM(void *object, unsigned const CtrlCode) {

}

char *getWeight_Chan_BtB(void *object, unsigned const CtrlCode) {

}

char *getWeight_L(void *object, unsigned const CtrlCode) {

}

char *getWeight_2L(void *object, unsigned const CtrlCode) {

}

char *getWeight_C(void *object, unsigned const CtrlCode) {

}

char *getWeight_2C(void *object, unsigned const CtrlCode) {

}

char *getWeight_Z(void *object, unsigned const CtrlCode) {

}

char *getWeight_PL_(void *object, unsigned const CtrlCode) {

}

char *getWeight_PLT_(void *object, unsigned const CtrlCode) {

}

char *getWeight_PLD_(void *object, unsigned const CtrlCode) {

}

char *getWeight_PL(void *object, unsigned const CtrlCode) {

}

char *getWeight_PLT(void *object, unsigned const CtrlCode) {

}

char *getWeight_PLD(void *object, unsigned const CtrlCode) {

}

int strsplit(char const *str, char const *delim, char  ***const p_strarr) {
	int len_s, len_d;
	int i, lastmatchedindex, index;
	int nums, j;
	char *item = NULL;
/*
	����������ַ���,���򷵻�-1
*/
	if (str == NULL || delim == NULL)
		return -1;
	len_s = strlen(str), len_d = strlen(delim);
	if (len_s == 0 || len_d == 0)
		return -1;
/*
	numsΪ�ָ���ɺ��ַ���������Ŀ��
	ѭ����ͳÿ��ѭ��ͳ�Ƴ��ָ������Ӧ�ָ�������Ŀ��
	���ָ����ڿ�ͷ���֣��Լ��������ַָ������򲻼�����
	ѭ����������ж����һ���ָ����Ҳ��Ƿ���ڴ��ָ�����Ŀ
*/
	for (i = 0, lastmatchedindex = 0, nums = 0; i <= len_s - len_d; i++) {
		if (strncmp(&str[i], delim, len_d) != 0)
			continue;
		if (i == 0 || i == lastmatchedindex + len_d) {
			;//�ָ����ڿ�ͷ���֣������������ַָ���
		} else {
			nums++;
		}
		lastmatchedindex = i;
		i += (len_d - 1);
	}
	if (len_s > lastmatchedindex + len_d)
		nums++;
/*
	������Ϊ0�������ָ���û��ʣ�µ��ַ���
*/
	if (nums == 0)
		return nums;
/*
	�����ַ���ָ������洢�ռ�
*/
	*p_strarr = (char **)malloc(sizeof(char *) * nums);
	if (*p_strarr == NULL)
		return -1;
/*
	ÿ��ѭ���ҳ��ָ������ַ���������洢�ռ䣬��������
	���벻�ɹ�Ҫ��ǰ��������Ŀռ䣨����*strarr���ͷŵ���������NULL
*/
	for (i = 0, index = 0; i <= len_s - len_d; i++) {
		if (strncmp(&str[i], delim, len_d) == 0) {
			i += (len_d - 1);
			continue;
		}
		lastmatchedindex = i;
		while(str[i] != '\0' && strncmp(&str[i], delim, len_d) !=0) {
			i++;
		}
		item = (void *)malloc(i - lastmatchedindex + 1);
		if (item == NULL) {
			for (j = 0; j < nums; j++) 
				if ((*p_strarr)[j] != NULL) 
					free ((*p_strarr)[j]), (*p_strarr)[j] == NULL;
			free(*p_strarr), *p_strarr = NULL;
			return -1;
		}
		strncpy(item, &str[lastmatchedindex], i - lastmatchedindex);
		item[i - lastmatchedindex] = '\0';
		(*p_strarr)[index++] = item;
		item = NULL;
		if (str[i] == '\0')
			break;
		i += (len_d - 1);
	}
	return nums;
}

void strsplit_free(char ***const p_strarr, int const nums) {
	int i;
	if (*p_strarr == NULL) 
		return;
	for (i = 0; i < nums; i++) 
		free((*p_strarr)[i]), (*p_strarr)[i] = NULL;
	free(*p_strarr), *p_strarr = NULL;
}

double average_delim(char const *str, char const *delim) {
	int i, nums;
	double value;
	char **strarr;
	nums = strsplit(str, delim, &strarr);
	if (nums < 0)
		return 0;
	else if (nums == 0)
		value = atof(str);
	else {
		for (i = 0, value = 0; i < nums; i++) 
			value += atof(strarr[i]);
		value /= nums;
		strsplit_free(&strarr, nums);
	}
	return value;
}

char *dtostr(double const d, unsigned const pre) {
	int i = 0;
	int sign = 1;//������� 
	int pow = 1;
	int len_i = 0, len_f = 0;
	int cor = 0;//С������ǰ���貹λ�� 
	long num_i = 0, num_f = 0;
	char *int_part = NULL;//�������� 
	char *float_part = NULL; //С������ 
	char *str = NULL;
/*
	����С�����֣�������������
	��ΪС�����ֿ��ܴ��ڽ�λ���������ֵ�����
	�磺9.9999��ȡ��λ��Ч���֣����Ӧ��Ϊ10 
	���������ж�Ӧֱ�Ӹ��ݴ���ֵ�ж�
	�����磺-0.001��ȡ��λ��Ч���֣�����������Ϊ0�����ᱻ�ж�Ϊ�� 
*/
	//�ж�����
	if (d < 0) 
		sign = -1;
	//���С�����֣�Ҫ�����������롣��չ��λ��������
	//��0.9995��������ڲ�������0.9994999֮���ʾ����չһλ������ȷ���� 
	while (++i <= pre)
		pow *= 10; 
	num_f = (d - (long)d) * pow * 100;
	if (num_f < 0) 
		num_f = ~num_f + 1;
	for (i = 0; i < 2; i++) {
		if (num_f % 10 >= 5) 
			num_f += 10;
		num_f /= 10;
	}
	
	//����������� 
	num_i = d;
	if (num_i < 0) 
		num_i = ~num_i + 1;
	if (num_f == pow) 
		num_i++, num_f = 0;
	
	//ת���������ֺ�С������ 
	int_part = ltostr(num_i);
	if (int_part == NULL)
		return NULL;
	if (num_f > 0) {
		float_part = ltostr(num_f);
		if (float_part == NULL) {
			free(int_part);
			return NULL;
		}
	}
	
/*
	�ж�С�������Ƿ���Ҫ����
	���С������������001��������ltostr�������򷵻��ַ��������1��
	���������Ҫ��ǰ������ַ�0���� 
	��������λ����Ҳ����cor 
*/ 	
	len_i = strlen(int_part);
	if (num_f > 0)
		len_f = strlen(float_part);
	cor = pre - len_f;
	//����С������ĩβ��0�����õ�����֮��ĳ��� 
	for (i = len_f; i > 0;) {
		if (float_part[--i] != '0') 
			break;
		float_part[i] = '\0';
		len_f = i; 
	}

	if (num_f == 0)
		cor = 0;
	if (sign == -1) 
		cor++;
	//����ռ��СΪ���������ֳ��� + �������ֳ��ȣ�������λ�� + С������ĩβ0��ĳ��� + 1 
	str = (char *)malloc(len_i + cor + len_f + 1);
	if (str == NULL) {
		free(int_part), free(float_part);
		return NULL;
	}
	str[0] = '\0';
	if (sign == -1 && (num_i != 0 || num_f != 0))
		str[0] = '-', str[1] = '\0', len_i++, cor--;
	str = strcat(str, int_part);
	if (num_f > 0)
		str[len_i] = '.';
	for (i = 0; i < cor; i++)
		str[++len_i] = '0';
	if (num_f > 0)
		strcpy(&str[++len_i], float_part);
	free(int_part), free(float_part);
	return str;
}

char *ltostr(long const l) {
	int digits = 0;//λ�� 
	int sign = 1;//������� 
	long num, i;
	char *str = NULL;
	num = l;
	if (num < 0) {
		sign = -1;
		num = ~num + 1;
	}
	i = num, digits = 0;
/*
	ͳ���ж���λ���֣�����ټӷ���λ 
*/
	do {
		i /= 10;
		digits++;
	} while(i != 0);
	if (sign == -1) 
		digits++;
/*
	����洢�ռ� 
*/
	str = (char *)malloc(digits + 1);
	if (str == NULL) 
		return NULL;
/*
	շת�����ÿ�ε������Ӻ���ǰ�����ַ����飬����и������� 
*/
	for (str[digits--] = '\0'; digits >= 0; digits--) {
		str[digits] = num % 10 + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return str;
}
