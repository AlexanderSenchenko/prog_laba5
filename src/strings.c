#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

int slen(const char *path)
{
	int len = 0;
	for (int i = 0; path[i] != '\0'; i++) {
		len++;
	}
	return len;
}

int sspn(const char *path)
{
	char arr[] = {':', '*', '?', '"', '<', '>', '|'};
	int n = 0;
	for (int i = 0; path[i] != ':'; i++) {
		n++;
	}
	for (int i = n; path[i] != '\0'; i++) {
		for (int j = 0; j < slen(arr); j++) {
			if (path[i] == arr[j]) {
				return i;
			}
		}
	}
	return 0;
}

int scmp(const char *path, const char *path_2)
{
	int flg = 1;
	for (int i = 0; flg && (path[i] != '\0' || path_2[i] != '\0'); i++) {
		if (path[i] != path_2[i]) {
			flg = 0;
		}
	}
	return flg;
}

void scpy(const char* path, char* cpy)
{
	int i;
	//cpy = malloc(sizeof(char) * slen(path) + 1);
	for (i = 0; path[i] != '\0'; i++) {
		cpy[i] = path[i];
	}
	cpy[i] = '\0';
}

