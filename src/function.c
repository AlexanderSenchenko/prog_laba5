#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "strings.h"

char *input()
{
	char *path = malloc(sizeof(char) * MAX_PATH);
	if (path == NULL) {
		free(path);
	}

	fgets(path, MAX_PATH, stdin);

	return path;
}

Error check(const char *path)
{
	Error code;

	if (slen(path) > MAX_PATH) {
		code.type = 1;
		code.index = slen(path);
	}

	return code;
}

/*
char check_os(const char *path)
{
	if
}
*/
