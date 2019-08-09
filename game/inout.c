void animateMovements(List *movements) {
	while(movements != NULL) {
		int index = movements->data;
		if(index != -1) {
			animate_tile(tiles[index], notes[index]);
		}
		movements = movements->next;
	}
}
