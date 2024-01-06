#include <stdio.h>

void __attribute__((constructor)) constructor(){
	printf("constructor called\n");
}

void __attribute__((destructor)) destructor(){
	printf("destructor called\n");
}
