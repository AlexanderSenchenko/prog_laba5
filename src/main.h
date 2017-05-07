#ifndef MAIN_H
#define MAIN_H
#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_PATH 260
extern int dir_n;

//А нужна ли мне структура??????
//typedef struct {
//	int type_er;
//	int index_er;
//} Error;

char *input();
int check(const char *path);
char *process(char **dir, char *dir1, char *dir2, char *del);
void output(const char *path);

#endif
