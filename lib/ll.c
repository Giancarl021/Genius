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

List* ll_push(List *ref, int element) {
	List *node = ll_createNode();
	
	node->data = element;
	node->next = ref;
	return node;
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

int ll_length(List *ref) {
	int cc = 0;
	while(ref != NULL) {
		cc++;
		ref = ref->next;
	}
	return cc;
}

List* ll_remove(List *ref, int index) {
	if(index > 0) {
		List *node = ll_get(ref, index);
		List *prev = ll_get(ref, index - 1);
		prev->next = ll_get(ref, index + 1);
		free(node);
		return ref;
	} else if(index == 0) {
		List *node = ref->next;
		free(ref);
		return node;
	}
}

List* ll_clear(List *ref) {
	List *current = ref;
	List *next;
	
	while(current != NULL) {
		next = current->next;
		free(current);
		current = next;
	}
	return NULL;
}
