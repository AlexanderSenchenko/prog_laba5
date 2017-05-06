#include "main.h"

char *input()
{
	char *path = malloc(sizeof(char) * MAX_PATH);
	if (path == NULL) {
		return NULL;
	}

	fgets(path, MAX_PATH, stdin);
	path[slen(path)] = '\0';

	return path;
}

int check(const char *path)
{
	if (slen(path) > MAX_PATH) {
		return -1;
	} else if (sspn(path) > 0) {
		return sspn(path);
	}

	

	return 0;
}

char *process(const char *path, const char *dir1, const char *dir2, const char *delim)
{
	char *cpy = malloc(sizeof(char) * MAX_PATH);
	scpy(path, cpy);
	for (int i = 0; path[i] != '\0'; i++) {
		if (scmp(&path[i], dir1) == 0) {
			scpy(dir2, &cpy[i]);
		}
	}

	return cpy;
}

void output(const char *path)
{
	printf("%s\n", path);
}

