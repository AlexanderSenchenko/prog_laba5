#include <stdio.h>
#include "main.h"
#include "strings.h"

int main()
{
	char *path;
	Error error;

	path = input();
	//printf("%s", path);

	error = check(path);
	printf("%d\n", slen(path));
	if (error.type == 1) {
		printf("Допустимый путь 260 символов\nВаш путь: %d\n", error.index);
	}

	return 0;
}
