#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

int dir_n = 1;

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
	char arr[] = {':', '\\', '?', '"', '<', '>', '|', '/', '*'};
	int flg1 = 1, flg2 = 1;
	for (int i = 0; path[i] != '\0'; i++) {
		if (path[i] == '+') {
			flg1 = 1;
			flg2 = 1;
		}
		for (int j = 0; j < slen(arr); j++) {
			if (flg1 && (path[i] == arr[j] && path[i + 1] == arr[1])) {
				flg1 = 0;
			} else if (flg2 && (path[i] == arr[j] && path[i - 1] == arr[0])) {
				flg2 = 0;
			} else if (path[i] == arr[j]) {
				return i + 1;
			}
		}
	}
	return 0;
}

char** stok(const char* path, const char* del)
{
	char **dir, *cpy, buf[1];
	int step = 0, j = 0;
	for (int i = 0; path[i] != '\0'; i++) {
		if (path[i] == del[0]) {
			dir_n++;
		}
	}
	dir = malloc(sizeof(char*) * dir_n);
	cpy = malloc(sizeof(char) * slen(path));
	scpy(path, cpy);

	for (int i = 0; path[i] != '\0'; i++) {
		if (path[i] == del[0] || path[i] == '\n') {
			//if (path[i + 1] == '\0') {//выглядит страшно
			//	i++;
			//}
			buf[0] = cpy[i];
			cpy[i] = '\0';
			dir[j] = malloc(sizeof(char) * slen(&cpy[step]) + 1);
			scpy(&cpy[step], dir[j]);
			step = i + 1;
			j++;
			cpy[i] = buf[0];
			//if (path[i] == '\0') {//псмотреть, можно ли красивее сделать
			//	i--;
			//}
		}
	}
	return dir;
}

int scmp(const char* path, const char* path_2)
{
	int flg = 1;//строки совпадают
	for (int i = 0; flg && (path[i] != '\0' || path_2[i] != '\0'); i++) {
		if (path[i] != path_2[i]) {
			return 1;//строки не совпадают
		}
	}
	return 0;
}

void scpy(const char* path, char* cpy)
{
	int i;
	for (i = 0; path[i] != '\0'; i++) {
		cpy[i] = path[i];
	}
	cpy[i] = '\0';
}

