/*
 ============================================================================
 Name        : CAdvancePointer.c
 Author      : herozhou1314
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include  <string.h>
# include  <ctype.h>
/*====================================================*/
#define TRUE 1
#define  FALSE 0
void Sample();
int strLen(char *String);
//int index(char **strings, char vavue) ;
void Sample2(int a, ...);
void Sample3();
int founction(int (*p)[4]);
void founction_();
/*====================================================*/
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	char str[] = "ww我愛";
	char str1 = "w";
	char *p = str;
//	int result = index(p, str1);
//	puts(result);

	printf(" Length==>> %d\n", strLen(str));
//printf(" Length==>> %s\n",index(str,"w")==1?"包含":"不包含");

	Sample();
	Sample2(3, 2, 5, 100);
	Sample3();
	founction_();
	return EXIT_SUCCESS;
}
/**指针的指针**/
void Sample() {
	int a = 12;
	int *b = &a;
	int *(*c) = &b;
	printf("a=%d \nb=%d  \nc=%d   ========\n", a, b, c);
	printf(" *b=%d   \n", *b);

	int a1 = 12;
	int *b1 = &a1;
	printf(" *b+1=%d  \n ", *b1 + 1);

	int a2 = 12;
	int *b2 = &a2;
	//printf("%d   *b++= %d   \n", b2, *++b2);

	int a3 = 12;
	int *b3 = &a3;
	printf("   *b+1=%d \n", ++*++b3);
	int a4 = 12;
	int *b4 = &a4;
	printf("   *b+1=%d \n", ++*b4++);

}
int strLen(char *str) {
	int lenght = 0;
	//str 爲數組首地址
	while (*str++ != '\0') {
		lenght += 1;
		printf("%c", *str);
	}
	printf(" Length==>> %d\n", lenght);
	return lenght;
}

/*int index(char **strings, char vavue) {
 printf("index");
 char *string;

 while ((string = *strings++) != NULL ) {
 //printf("string-->>%c", *string);
 //str 爲數組首地址
 while (*string != '\0') {
 if (*string++ == vavue) {
 return TRUE;
 }
 }
 }
 return FALSE;
 }*/
void Sample2(int a, ...) {
	va_list va_arg;
	int count;
	float sum = 0;

	/*the start */
	va_start(va_arg, a);
	for (count = 0; count < a; ++count) {
		sum += va_arg(va_arg,int);
	}
	va_end(va_arg);
	printf("-->%f", sum);
}
# define COUNT 10
void Sample3() {
	int arr[3][4];
	int (*p)[4] = arr;		//==	p=arr;

	int a = 0, b;
	for (a = 0; a < 3; ++a) {
		for (b = 0; b < 4; ++b) {
			*(*(p + a) + b) = a + b;
		}
	}
	for (a = 0; a < 3; ++a) {
		for (b = 0; b < 4; ++b) {
			printf("\n第  %d行 第 %d 個= =%d", a + 1, b + 1, arr[a][b]);
		}
	}
	founction(arr);
}
int founction(int (*p)[4]) {
	int a = 0, b;
	//int arr[3][4]={1,2,3,4,5,6,7,8,9,0};//
	int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9 } };
	//与
	/**
	 *    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9},{0}}
	 *
	 *
	 *
	 * **/

	for (a = 0; a < 3; ++a) {
		for (b = 0; b < 4; ++b) {
			printf("\n第  %d行 第 %d 個= =%d", a + 1, b + 1, arr[a][b]);
		}
	}
	printf("\n");
	return 0;
}

void founction_() {
	int ints[2][10] = { 10, 20, 30, 4, 50, 60, 70, 80, 90, 100, 110, 120, 130,
			140, 150, 160, 170, 180, 190, 200 };
	//int *pi=ints+3;
	int (*P)[10] = ints;

	int var1, var;
	for (var = 0; var < 2; ++var) {
		for (var1 = 0; var1 < 10; ++var1) {
			printf(" 第%d行第%d個===>%d\n", var, var1, &ints[var][var1]);
		}
	}
	int array[4][2][3][6];
	printf("%d\n", &ints[-2]);

	signed int a = -12;
	unsigned int b = -12;

	printf("%d============%d", a, b);
	char str_[] = "123@#FDsP[e?";
	int aaa = 0;
	int max = sizeof(str_) / sizeof(str_[0]);
	for (aaa = 0; aaa < max; ++aaa) {
		if (islower(str_[aaa])) {
			printf("\n%c is a lower-case character", *(str_ + aaa));
		} else if (isdigit(str_[aaa])) {
			printf("\n%c is a digit-case character", *(str_ + aaa));
		}
	}
	/*	while (str_++ != NULL ) {

	 }*/

}
