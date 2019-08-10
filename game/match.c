bool match(void) {
	List *movements = ll_createFirstNode(-1);
	List *plays;
	bool miss_tile = false;
	int selected_tile = -1;
	
	while(!miss_tile) {
		srand(time(NULL));
		ll_add(movements, generate_movement());
		animate_movements(movements);
		textbackground(BLACK);
		Sleep(600);
		gotoxy(1, 25);
		DText *arr[5] = {
			new_dtext("[1] Verde\n", LIGHTGREEN),
			new_dtext("[2] Vermelho\n", LIGHTRED),
			new_dtext("[3] Amarelo\n", YELLOW),
			new_dtext("[4] Azul\n", LIGHTBLUE),
			new_dtext("[0] Desistir\n", MAGENTA)
		};
		selected_tile = draw_options(arr, sizeof(arr));
		
		int i, l = sizeof(arr) / 8;
		for(i = 0; i < l; i++) {
			destroy_dtext(arr[i]);
		}
		
		textcolor(LIGHTGRAY);
		miss_tile = true;
	}
	return true;
}
