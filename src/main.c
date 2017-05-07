#include "main.h"

int main()
{
	char *dir1, *dir2, *delim, *path, **dirs, *new_path;

	printf("Delim: ");
	delim = input();
	if (check(delim) != 0) {
		printf("Error delim\n");
		return 0;
	}
	printf("Path: ");
	path = input();
	if (check(path) != 0) {
		printf("Error path\n");
		return 0;
	}
	printf("Dir1: ");
	dir1 = input();
	if (check(dir1) != 0) {
		printf("Error dir1\n");
		return 0;
	}
	printf("Dir2: ");
	dir2 = input();
	if (check(dir2) != 0) {
		printf("Error dir2\n");
		return 0;
	}

	//output(arg, path);

	dirs = stok(path, delim);
	for (int i = 0; i < dir_n; i++) {
		printf("%s+", dirs[i]);
	}
	printf("\n");

	new_path = process(dirs, dir1, dir2, delim);
	printf("new path: %s\n", new_path);
	return 0;
}
