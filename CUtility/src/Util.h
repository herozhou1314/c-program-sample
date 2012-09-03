/*
 * Util.h
 *
 *  Created on: 2012-8-26
 *      Author: herozhou1314
 */

#ifndef UTIL_H_
#define UTIL_H_

/**
 *  内存制作一个字符串的拷贝
 */
char *strdup_(char const *str);
/***
 * print string
 */
void util_print(char *print_str);
/***
 * print int
 */
void util_print_int(int i);
/***
 * print float
 */
void util_print_float(float f);

/**
 *  用C语言实现字符串替换功能
 * char *source,
 *    原字符串
 *char *sub,
 *          被代替的字符串
 *char *rep
 *   代替的字符串啊
 */
char *replace(char *source, char *sub, char *rep);
#endif /* UTIL_H_ */
