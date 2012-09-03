/*
 * Sample.c
 *
 *  Created on: 2012-8-26
 *      Author: herozhou1314
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	util_print("what` your name?");
	util_print_int(1000);
	util_print_float(1000.0);
	char *str = "hello malloc";
	char *p;
	p = strdup_(str);
	util_print(str);
	util_print(p);
	if (p != NULL ) {
		free(p);
	}
	char s1[] = "abbccdfdcdbbdcd";
	char s2[] = "dcd";
	char s3[] = "12345";
	char *p1 = replace(s1, s2, s3);
	printf("source=%s\n", s1);
	puts(s1);
	printf("sub = %s\n", s2);
	puts(s2);
	printf("replace string = %s", p1);
	return EXIT_SUCCESS;
}
