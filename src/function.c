#include "main.h"

char *input()
{
	char *path = malloc(sizeof(char) * MAX_PATH);
	if (path == NULL) {
		return NULL;
	}
	fgets(path, MAX_PATH, stdin);
	path[slen(path)] = '\0';
	return path;
}

int check(const char *path, char* del)
{
	int index;
	if (slen(path) > MAX_PATH) {
		return -1;
	}
	index = sspn(path, del);
	if (index != 0) {
		return index;
	}
	return 0;
}

int check_delim(char *del)
{
	char arr[] = {'+', ':', ' '};
	int index = 1;
	for (int i = 0; i < slen(arr); i++) {
		if (del[0] == arr[i]) {
			index = 0;
		}
	}
	return index;
}

char *process(char *path, char *dir1, char *dir2, char *del)
{
	char *new_path = malloc(sizeof(char) * MAX_PATH), **dir;
	if (new_path == NULL) {
		return NULL;
	}
	int step = 0, step_swap;
	dir = stok(path, del);
	if (dir == NULL) {
		return NULL;
	}
	for (int i = 0; i < dir_n; i++) {
		if (scmp(dir[i], dir1) != -1) {
			step_swap = scmp(dir[i], dir1);
			scpy(dir2, &new_path[step]);
			scpy(&dir[i][step_swap], &new_path[slen(new_path)]);
			if (i != dir_n - 1) {
				new_path[slen(new_path)] = del[0];
				step = slen(new_path);
			}
			continue;			
		}
		scpy(dir[i], &new_path[step]);
		if (i != dir_n - 1) {
			new_path[slen(new_path)] = del[0];
			step = slen(new_path);
		}
	}
	return new_path;
}

int output(char *path, int index)
{
	int back = 0;
	if (path == NULL) {
		printf("Memory error");
		back = 1;
	} else if (index == -2) {
		printf("New path: %s\n", path);
	} else if (index == -1) {
		printf("String too long");
		back = 1;
	} else if (index > 0) {
		printf("Error symbol #: %d\n", index);
		back = 1;
	}
	return back;
}

