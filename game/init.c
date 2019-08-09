bool initMatch(void) {
	List *movements = ll_createFirstNode(-1);
	List *plays;
	int i;
	
	srand(time(NULL));
	
	movements = ll_push(movements, generate_movement());
//	printList(movements);
	return true;
}

int generate_movement(void) {
	return rand() % 4;
}
