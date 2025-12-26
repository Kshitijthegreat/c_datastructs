//Linked list implemented in c
//nodes are called links for some reason

//link struct
struct ll_link;
//creates new link
struct ll_link* ll_newlink(int dat, struct ll_link* nxt);
//creates new linked list from an array
struct ll_link* ll_newlist(int* start, int size);
//gets pointer to the link at the specified index
struct ll_link* ll_elm(struct ll_link* root, int index);
//gets data value from the link at the specified element( same as ll_elm(foo, n)->data; )
int ll_elmV(struct ll_link* root, int index);
//inserts new link before the link already present at specified index
//if index = 0, inserts data from index=0 at index=1, then modifies data at index=0 with given data
//this is done so that pointer to root of ll is not modified
void ll_insert(struct ll_link* root, int data, int index);
//remove link at given index(and frees allocated memory)
//if index=0, copies data from index=1 into index=0, then removes link at index=1
//this is done so that pointer to root of ll is not modified
void ll_rem(struct ll_link* root, int index);
//removes entire ll
void ll_remlist(struct ll_link* root);
