#include <stdio.h>

__attribute__((constructor))
void constructor() {
	printf("constructor called\n");
}

__attribute__((destructor))
void destructor() {
	printf("destructor called\n");
}
