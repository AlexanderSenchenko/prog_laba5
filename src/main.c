#include "main.h"

int main()
{
<<<<<<< HEAD
	char *dir1, *dir2, *delim, *path, *new_path;
||||||| merged common ancestors
	char *path, *dir, *cpy;
	Error arg;
=======
	char *path, *cpy;
	Error arg;
>>>>>>> 11b4e5bd0781648b134a0d4129c84e29a810f1b3

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


<<<<<<< HEAD
	printf("%d\n", scmp(path, dir1));
	//output(arg, path);
||||||| merged common ancestors
	cpy = malloc(sizeof(char) * slen(path) + 1);
	scpy(path, cpy);
	printf("Cpy %s", cpy);

	dir = stok(path);
	//for (int i = 0; i < 2; i++) {
		printf("%s\n", dir);
	//}

	output(arg, path);
=======
	cpy = malloc(sizeof(char) * slen(path) + 1);
	scpy(path, cpy);
	printf("Cpy %s", cpy);

	/*dir = stok(path);
	for (int i = 0; i < 2; i++) {
		printf("%s\n", dir);
	}*/

	output(arg, path);
>>>>>>> 11b4e5bd0781648b134a0d4129c84e29a810f1b3

	return 0;
}
