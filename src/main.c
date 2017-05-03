#include "main.h"

int main()
{
	char *path;
	Error arg;

	path = input();

	arg = check(path);

	printf("Error: %d\n", sspn(path));

	output(arg, path);

	return 0;
}
