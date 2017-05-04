#include "main.h"

char *input()
{
	char *path = malloc(sizeof(char) * MAX_PATH);
	if (path == NULL) {
		free(path);
	}

	fgets(path, MAX_PATH, stdin);
	path[slen(path)] = '\0';

	return path;
}

Error check(const char *path)
{
	Error arg;

	if (slen(path) > MAX_PATH) {
		arg.type_er = 1;
		arg.index_er = slen(path);
	} else if (sspn(path) > 0) {
		arg.type_er = 2;
		arg.index_er = sspn(path);
	}

	return arg;
}

char *check_os(const char *path)
{
	char *OS;
	int check_w = 0, check_l = 0;

	for (int i = 0; path[i] != '\0'; i++) {
		if (check_w == 0 && path[i] == '/') {
			check_w++;
		} else if (check_l == 0 && path[i] == '\\') {
			check_l++;
		}

		if ((check_w > 0 && check_l > 0)) {
			return NULL;
		}

		if (path[i + 1] == '\0' && check_w == 0) {
			OS = malloc(sizeof(char) * slen("Windows"));
			if (OS == NULL) {
				free(OS);
				break;
			}
			OS = "Windows";
			break;
		} else if (path[i + 1] == '\0' && check_l == 0) {
			OS = malloc(sizeof(char) * slen("Linux"));
			if (OS == NULL) {
				free(OS);
				break;
			}
			OS = "Linux";
			break;
		} else if (path[i + 1] == '\0' && check_w == 0 && check_l == 0) {
			return NULL;
		}
	}

	return OS;
}

void output(Error arg, const char *path)
{
	//printf("%d\n", arg.type_er);
	//printf("%d\n", arg.index_er);
	printf("OS: %s\n", check_os(path));
	//printf("Depth: %d\n", depth);
}

