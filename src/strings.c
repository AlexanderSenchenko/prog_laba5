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

char* stok(const char* path)
{
	char *dir = malloc(sizeof(char) * 10);
	int i = 0, z = 0;
	//for (int i = 0; i < 2; i++) {
	//	*dir[i] = path[i];
	//}
	while (path[i] != '\\') {
		i++;
	}
	i++;

	//for (int j = i + 1; path[j] != '\n'; j++) {
	//	dir[z] = path[j];
		//if (path[j] == '\\') {
		//	j++;
		//}
	//	z++;
	//}
	while (path[i] != '\\') {
		dir[z] = path[i];
		z++;
		i++;
	}
	dir[z] = '\0';

	//char *cpy = scpy(path);
	//for () {

	//}

	return dir;
}

int sspn(const char *path)
{
	for (int i = 0; path[i] != '\0'; i++) {
		switch (path[i]) {
		case ':':
			return i + 1;
		case '*':
			return i + 1;
		case '?':
			return i + 1;
		case '"':
			return i + 1;
		case '<':
			return i + 1;
		case '>':
			return i + 1;
		case '|':
			return i + 1;
		default:
			break;
		}
	}
	return 0;
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

