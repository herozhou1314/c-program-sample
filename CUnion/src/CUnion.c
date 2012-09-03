/*
 ============================================================================
 Name        : CUnion.c
 Author      : herozhou1314
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
union {
	char s[9];
	int n;
	double d;
} u1 = { "hero" };

union {
	char s[5];
	int n;
	double d;
} u2 = { 12 };

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	printf("%d\n", sizeof(u1));
	printf("%d\n", sizeof(u2));
	//printf("0x%x\n", &u1);
	//printf("0x%x\n", &u1.s);
	//printf("0x%x\n", &u1.n);
//	printf("0x%x\n", &u1.d);
	u1.n = 1;
	printf("%c\n", u1.s[1]);
	printf("%d\n", u2.d);
	printf("%lf\n", u1.d);
	unsigned char *p = (unsigned char *) &u1;
	printf("%d\n", *p);
	printf("%d\n", *(p + 1));
	printf("%d\n", *(p + 2));
	printf("%d\n", *(p + 3));
	printf("%d\n", *(p + 4));
	printf("%d\n", *(p + 5));
	printf("%d\n", *(p + 6));
	printf("%d\n", *(p + 7));
	return EXIT_SUCCESS;
}
