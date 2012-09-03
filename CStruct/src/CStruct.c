/*
 ============================================================================
 Name        : CStruct.c
 Author      : herozhou1314
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
/***/
void sample();
void sample1();
struct Person {
	char Name[15];
	char address[10];
	int sex;
};

typedef struct {
	int a;
	short b[2];
} EX2;
typedef struct EX {
	int a;
	char b[3];
	EX2 c;
	struct EX2 *d;
} Ex;

struct NODE {
	int a;
	struct NODE *b;
	struct NODE *c;
};
/***=============**/
int main(void) {
	puts("!!!Hello World!!!\n"); /* prints !!!Hello World!!! */
	sample2();

	sample1();
	sample();
	return EXIT_SUCCESS;
}

/** struct  sample*/

void sample2() {
	struct NODE nodes[5] = {

	{ 5, nodes + 3, NULL },

	{ 15, nodes + 4, nodes + 3 },

	{ 22, NULL, nodes + 4 },

	{ 12, nodes + 1, nodes },

	{ 18, nodes + 2, nodes + 1 } };

	struct NODE *np = nodes + 2;
	struct NODE **npp = &nodes[1].b + 2;
	printf("%d\n", nodes->a);
	printf("%d\n", nodes[3].c);
	printf("%d\n", *nodes);
	printf("%d\n", (*nodes).a);
	printf("%d\n", nodes[3].c->b);
	printf("%d\n", nodes);
	printf("%d\n",*npp);
	printf("%d\n",&nodes[1].b+2);

}

/*=============================================*/
void sample1() {
	Ex x = { 10, "Hi", { 5, { -1, 25 } }, 0 };
	Ex *px = &x;
	printf("\n%d\n", px->a);

	int *p = &px->a;
	printf("%d\n", *p);
	printf("%d\n", px->c.a);
	printf("%d\n", *(px->c.b)); //*px->c.b    -> 優先級大於 & 和 *   在c中 b 是一个数组   px->c.b 指向地是 b数组的首地址
	printf("%d\n", px->c.b[1]); //訪問數組
//printf()
}
void sample() {
	struct Person *p = { "herozhou", "pennan in china", 1 };
	printf("%s\n", p->Name);
}
