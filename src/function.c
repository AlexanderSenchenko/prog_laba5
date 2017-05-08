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

int check(const char *path)
{
	if (slen(path) > MAX_PATH) {
		return -1;
	} else if (sspn(path) != 0) {
		return sspn(path) + 1;
	}
	return 0;
}

char *process(char **dir, char *dir1, char *dir2, char *del)
{
	char *new_path = malloc(sizeof(char) * MAX_PATH);//, *cpy;
	int step = 0, step_swap;
	for (int i = 0; i < dir_n; i++) {
		if (scmp(dir[i], dir1) != -1) {	
			//cpy = malloc(sizeof(char) * MAX_PATH);
			step_swap = scmp(dir[i], dir1);
			scpy(dir2, &new_path[step]);
			scpy(&dir[i][step_swap], &new_path[slen(new_path)]);
			new_path[slen(new_path)] = del[0];
			step = slen(new_path);
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

void output(const char *path)
{
	printf("%s\n", path);
}

