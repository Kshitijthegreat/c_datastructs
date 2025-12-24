#include "ll.h"
#include<stdio.h>
#include<stdlib.h>

struct ll_link{
	int data;
	struct ll_link *nxt;
};
struct ll_link* ll_newlink(int dat, struct ll_link* nxt){
	struct ll_link *tmp = (struct ll_link*)malloc(sizeof(struct ll_link));
	if(tmp == 0){return 0;}
	tmp->data=dat;
	tmp->nxt=nxt;
	return tmp;
}

struct ll_link* ll_newlist(int* start, int size){
	struct ll_link* root = ll_newlink(*start, 0);
	struct ll_link* prev = root;
	for(int i=1; i<size; i++){
		prev->nxt = ll_newlink(start[i], 0);
		prev = prev->nxt;
	}
	return root;
}

struct ll_link* ll_elm(struct ll_link* root, int index){
	struct ll_link* curr = root;
	for(int i = 0; i!=index;i++){
		curr=curr->nxt;
	}
	return curr;
}

int ll_elmV(struct ll_link* root, int index){
	return ll_elm(root, index)->data;
}

void ll_insert(struct ll_link* root, int data, int index){
	if(index==0){
		ll_insert(root, root->data, 1);
		root->data = data;
		return;
	}
	struct ll_link* curr = ll_elm(root, index-1);
	curr->nxt = ll_newlink(data, curr->nxt);
	return;
}

void ll_rem(struct ll_link* root, int index){
	if(index == 0){
		root->data = root->nxt->data;
		struct ll_link* tmp = root->nxt;
		root->nxt = tmp->nxt;
		free(tmp);
		return;
	}
	struct ll_link* prev = ll_elm(root, index-1);
	struct ll_link* tmp = prev->nxt;
	prev->nxt = tmp->nxt;
	free(tmp);
}

void ll_remlist(struct ll_link* root){
	struct ll_link* curr = root;
	struct ll_link* tmp;
	while(curr != 0){
		tmp = curr->nxt;
		printf("freeing %d", curr->data);
		free(curr);
		curr = tmp;
	}
	return;
}
