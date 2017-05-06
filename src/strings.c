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

<<<<<<< HEAD
int sspn(const char *path)
||||||| merged common ancestors
char** stok(const char* path)
=======
/*
char** stok(const char* path)
>>>>>>> 11b4e5bd0781648b134a0d4129c84e29a810f1b3
{
<<<<<<< HEAD
	char arr[] = {':', '*', '?', '"', '<', '>', '|'};
	int n = 0;
	for (int i = 0; path[i] != ':'; i++) {
		n++;
||||||| merged common ancestors
	char *dir = malloc(sizeof(char) * slen(path) + 1);
	int i = 0;
	char *delim = '\';
	while (path[i] != delim[0]) {
		i++;
=======
	char **dir, *del = '\', *cpy;
	int i = 0, n = 0, z, max_dir = 0;
	while (path[i] != del[0]) {
		i++;
>>>>>>> 11b4e5bd0781648b134a0d4129c84e29a810f1b3
	}
<<<<<<< HEAD
	for (int i = n; path[i] != '\0'; i++) {
		for (int j = 0; j < slen(arr); j++) {
			if (path[i] == arr[j]) {
				return i;
			}
		}
||||||| merged common ancestors

	for (i = i + 1; (path[i] != '\') || (path[i] != '\0'); i++) {
		dir
=======
	for (int j = 0; path[j] != '\0'; j++) {
		if (path[j] == del[0]) {
			n++;
		}
>>>>>>> 11b4e5bd0781648b134a0d4129c84e29a810f1b3
	}
<<<<<<< HEAD
	return 0;
||||||| merged common ancestors

	char** dir = malloc(sizeof(char*) * 10);
	dir[0] = malloc(sizrof() * );

	return dir;
=======

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
>>>>>>> 11b4e5bd0781648b134a0d4129c84e29a810f1b3
}
*/

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

