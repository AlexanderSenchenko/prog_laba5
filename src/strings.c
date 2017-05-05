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

/*
char** stok(const char* path)
{
	char **dir, *del = '\', *cpy;
	int i = 0, n = 0, z, max_dir = 0;
	while (path[i] != del[0]) {
		i++;
	}
	for (int j = 0; path[j] != '\0'; j++) {
		if (path[j] == del[0]) {
			n++;
		}
	}

	cpy = malloc(sizeof(char) * slen(path) + 1);
	scpy(path, cpy);

	dir = malloc(sizeof(char*) * n);
	for (i = i + 1, int k = 0; (path[i] != del[0]) || (path[i] != '\0'); i = i + z + 1) {
		z = 0;
		for (int j = i; (path[j] != del[0]) || (path[j] != '\0'); j++) {
			z++;
		}
		cpy[z + 1] = '\0';
		if (max_dir = 0) {
			max_dir = (slen(cpy[i]));
		}
		dir[k] = malloc(sizeof(char) * z + 1);

		if (slen(cpy[0]) != slen(i)) {
			
		}

		scpy(cpy[i], dir);


	}

	return dir;
}
*/

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

/*
int scmp(const char* path, const char* path_2) {
	for (int i = 0; path[) {

	}

	return 0;
}
*/

void scpy(const char* path, char* cpy)
{
	int i;
	for (i = 0; path[i] != '\0'; i++) {
		cpy[i] = path[i];
	}
	cpy[i] = '\0';
}

