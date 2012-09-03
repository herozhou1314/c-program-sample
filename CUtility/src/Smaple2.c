/*
 * Smaple2..c
 *
 *  Created on: 2012-8-31
 *      Author: herozhou1314
 *
 *      内存制作一个字符串的拷贝
 */
#include <string.h>
#include <stdlib.h>
char *strdup_(char const *str) {
char *newString;
/****
 * 请求足够长度的长度，用于存储字符串，遇到 Null结束
 */
newString=malloc(strlen(str)+1);
/***
 * 如果申請成功，複製字符串
 */
if (newString!=NULL)
  strcspn(newString,str);
return newString;
}
