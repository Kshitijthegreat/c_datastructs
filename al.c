#include "al.h"
#include<stdlib.h>

al_list al_newlist(int size){
	al_list tmp;
        tmp.begin = (int*)malloc(size*sizeof(int));
        tmp.size = size;
        return tmp;
}
