#include "main.h"

int main()
{
	char *path, *dir, *cpy;
	Error arg;

	path = input();

	arg = check(path);

	printf("Error: %d\n", sspn(path));

	cpy = malloc(sizeof(char) * slen(path) + 1);
	scpy(path, cpy);
	printf("Cpy %s", cpy);

	dir = stok(path);
	//for (int i = 0; i < 2; i++) {
		printf("%s\n", dir);
	//}

	output(arg, path);

	return 0;
}
