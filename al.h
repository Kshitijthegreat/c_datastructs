//array list(vector) implemented in c
#include<stdlib.h>

typedef struct {
	int* begin;
	int size;
} al_list;

al_list al_newlist(int size);
