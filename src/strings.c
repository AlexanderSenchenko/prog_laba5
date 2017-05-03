#include "strings.h"

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
	for (int i = 0; path != '\0'; i++) {
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
		}
	}
	return 0;
}

