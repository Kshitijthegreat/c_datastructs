#include"ll.h"
#include<stdio.h>

int main(){
        int list[4] = {1,3,5,7};
        struct ll_link* root = ll_newlist(list, 4);
        printf("%d", ll_elmV(root,0));
        printf("%d", ll_elmV(root,1));
        printf("%d", ll_elmV(root,2));
	return 0;
}
