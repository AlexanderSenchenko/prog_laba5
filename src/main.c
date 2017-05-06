#include "main.h"

int main()
{
	char *dir1, *dir2, *delim, *path, **dirs; //, *new_path;

	printf("Delim: ");
	delim = input();
	printf("Path: ");
	path = input();
	printf("Dir1: ");
	dir1 = input();
	printf("Dir2: ");
	dir2 = input();

	//new_path = process(path, dir1, dir2, delim);
	//printf("new path: %s", new_path);

	printf("%d\n", scmp(dir1, dir2));
	//output(arg, path);

	dirs = stok(path, delim);
	for (int i = 0; dirs[i] != NULL; i++) {
		printf("%s ", dirs[i]);
	}
	return 0;
}
