bool match(void) {
	List *movements = ll_createFirstNode(-1);
	List *plays;
	bool miss_tile = false;
	
	while(!miss_tile) {
		srand(time(NULL));
		ll_add(movements, generate_movement());
		animate_movements(movements);
		Sleep(600);
		miss_tile = true;
	}
	return true;
}
