struct node {
	int data;
	struct node *next;
};

typedef struct node List;

void printList(List *node);

List* ll_createNode(void);

List* ll_createFirstNode(int element);

void ll_push(List *ref, int element);

void ll_add(List *ref, int element);

void ll_insert(List *ref, int element);

List* ll_get(List *ref, int index);

int ll_lenght(List *ref);

void ll_remove(List *ref, int index);
