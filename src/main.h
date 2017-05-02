#ifndef MAIN_H
#define MAIN_H

#define MAX_PATH 260

typedef struct {
	int type;
	int index;
} Error;

char *input();
Error check(const char *path);

#endif
