#include "strings.h"
#include <stdio.h>

int slen(const char *path)
{
	int len = 0;
	for (int i = 0; path[i] != '\n'; i++) {
		len++;
	}
	return len;
}

/*
int sspn(const char *path)
{
	char os[8];

	check_os(path);

	for () {

	}
}
*/
