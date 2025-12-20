struct ll_link;
struct ll_link* ll_newlink(int dat, struct ll_link* nxt);
struct ll_link* ll_newlist(int* start, int size);
struct ll_link* ll_elm(struct ll_link* root, int index);
int ll_elmV(struct ll_link* root, int index);
void ll_insert(struct ll_link* root, int data, int index);
void ll_rem(struct ll_link* root, int index);
void ll_remlist(struct ll_link* root);
