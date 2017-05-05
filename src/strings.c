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

char** stok(const char* path)
{
	char *dir = malloc(sizeof(char) * slen(path) + 1);
	int i = 0;
	char *delim = '\';
	while (path[i] != delim[0]) {
		i++;
	}

	for (i = i + 1; (path[i] != '\') || (path[i] != '\0'); i++) {
		dir
	}

	char** dir = malloc(sizeof(char*) * 10);
	dir[0] = malloc(sizrof() * );

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

