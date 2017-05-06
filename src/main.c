#include "main.h"

int main()
{
	char *dir1, *dir2, *delim, *path, *new_path;

	printf("Delim: ");
	delim = input();
	printf("Path: ");
	path = input();
	printf("Dir1: ");
	dir1 = input();
	printf("Dir2: ");
	dir2 = input();

	new_path = process(path, dir1, dir2, delim);
	printf("new path: %s", new_path);


	printf("%d\n", scmp(path, dir1));
	//output(arg, path);

	return 0;
}
