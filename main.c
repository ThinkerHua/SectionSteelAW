#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SectionSteel.h"
#include "calculation.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100], delim[10] = {'\0'};
	char from[5] = {'\0'}, to[5] = {'\0'};
	char *newstr = NULL, **strarr = NULL;
	int i, nums;
	double d;
	printf("Now testting function \"strsplit\"\n");
	while (scanf("%s %s", str, delim) != EOF) {
		nums = strsplit(str, delim, &strarr);
		if (nums <= 0)
			continue;
		for (i = 0; i < nums; i++) {
			printf("%s\n", strarr[i]);
		}
		strsplit_free(&strarr, nums);
		i = 0;
		while(str[i] != '\0') 
			str[i] = '\0', i++;
	}
	printf("Now testting function \"replace\"\n");
	while (scanf("%s %s %s", str, from, to) != EOF) {
		newstr = (char *)malloc(strlen(str) + 1);
		if (newstr == NULL) 
			continue;
		strcpy(newstr, str);
		if (replace(&newstr, from, to) > 0) 
			printf("%s\n", newstr), free(newstr);
	}
	printf("Now testting function \"dtostr\"\n");
	while (scanf("%lf", &d) != EOF) {
		newstr = dtostr(d, 3);
		if (newstr == NULL)
			continue;
		printf("%s\n", newstr), free(newstr);
	}
	return 0;
}
