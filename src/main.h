#ifndef MAIN_H
#define MAIN_H
#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_PATH 260

//А нужна ли мне структура??????
typedef struct {
	int type_er;
	int index_er;
} Error;

char *input();
Error check(const char *path);
void output(Error arg, const char *path);
char *check_os(const char *path);

#endif
