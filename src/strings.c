#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

int slen(const char* path)
{
	int len = 0;
	for (int i = 0; path[i] != '\0'; i++) {
		len++;
	}
	return len;
}

int sspn(const char* path)
{
	char arr[] = {':', '*', '?', '"', '<', '>', '|'};
	for (int i = 0; path[i] != '\0'; i++) {
		for (int j = 0; j < slen(arr); j++) {
			if ((path[i] == arr[0]) && (path[i + 1] == '\\')) {
				continue;//можно сломать
			}
			if (path[i] == arr[j]) {
				return i;
			}
		}
	}
	return 0;
}

char** stok(const char* path, const char* del)
{
	char **dir, *cpy, buf[1];
	int dir_n = 2, step = 0, j = 0;
	for (int i = 0; path[i] != '\0'; i++) {
		if (path[i] == del[0]) {
			dir_n++;
		}
	}
	dir = malloc(sizeof(char*) * dir_n);
	cpy = malloc(sizeof(char) * slen(path));
	scpy(path, cpy);

	for (int i = 0; path[i] != '\0'; i++) {
		if (path[i] == del[0] || path[i + 1] == '\0') {
			if (path[i + 1] == '\0') {//выглядит страшно
				i++;
			}
			buf[0] = cpy[i];
			cpy[i] = '\0';
			dir[j] = malloc(sizeof(char) * slen(&cpy[step]) + 1);
			scpy(&cpy[step], dir[j]);
			step = i + 1;
			j++;
			cpy[i] = buf[0];
			if (path[i] == '\0') {//псмотреть, можно ли красивее сделать
				i--;
			}
		}
	}
	return dir;
}

int scmp(const char* path, const char* path_2)
{
	int flg = 1;
	for (int i = 0; flg && (path[i] != '\0' || path_2[i] != '\0'); i++) {
		if (path[i] != path_2[i]) {
			flg = 0;//чекнуть на правильность работы
		}
	}
	return flg;
}

void scpy(const char* path, char* cpy)
{
	int i;
	for (i = 0; path[i] != '\0'; i++) {
		cpy[i] = path[i];
	}
	cpy[i] = '\0';
}

