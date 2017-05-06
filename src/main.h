#ifndef MAIN_H
#define MAIN_H
#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_PATH 260

//А нужна ли мне структура??????
//typedef struct {
//	int type_er;
//	int index_er;
//} Error;

char *input();
int check(const char *path);
//char *process(const char *path, const char *dir1, const char *dir2, const char *del);
void output(const char *path);

#endif
