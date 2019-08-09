void printList(List *node) {
	while(node != NULL) {
		printf("%d\n", node->data);
		node = node->next;
	}
}

List* ll_createNode(void) {
	List *node = (List*)malloc(sizeof(List));
	node->next = NULL;
	return node;
}

List* ll_createFirstNode(int element) {
	List *node = ll_createNode();
	node->data = element;
	return node;
}

void ll_push(List *ref, int element) {
	List *node = ll_createNode();
	List *tmp = ll_createNode();
	
	tmp->data = ref->data;
	tmp->next = ref->next;
	
	node->data = element;
	node->next = tmp;
	(*ref) = (*node);
}

void ll_add(List *ref, int element) {
	List *node = ll_createNode();
	node->data = element;
	while(ref->next != NULL) ref = ref->next;
	ref->next = node;
}

void ll_insert(List *ref, int element) {
	
	if(ref == NULL) return;
	
	List *node = ll_createNode();
	List *tmp = ll_createNode();
	
	tmp->data = ref->data;
	tmp->next = ref->next;
	
	node->data = element;
	node->next = tmp;
	(*ref) = (*node);
}

List* ll_get(List *ref, int index) {
	int i;
	for(i = 0; i < index; i++) {
		if(ref == NULL) return NULL;
		ref = ref->next;
	}
	return ref;
}

int ll_lenght(List *ref) {
	int cc = 0;
	while(ref != NULL) {
		cc++;
		ref = ref->next;
	}
	return cc;
}

void ll_remove(List *ref, int index) {
	List *node = ll_get(ref, index);
	if(index > 0) {
		List *prev = ll_get(ref, index - 1);
		prev->next = ll_get(ref, index + 1);
		free(node);
	} else if(index == 0) {
		List *node = ref;
		(*ref) = (*ref->next);
		free(node);
	}
}
