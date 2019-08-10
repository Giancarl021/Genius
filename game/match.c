bool match(void) {
	DText *options[5] = {
		new_dtext("[1] Verde\n", LIGHTGREEN),
		new_dtext("[2] Vermelho\n", LIGHTRED),
		new_dtext("[3] Amarelo\n", YELLOW),
		new_dtext("[4] Azul\n", LIGHTBLUE),
		new_dtext("[0] Desistir\n", MAGENTA)
	};
	int i, l = sizeof(options) / 8;
	
	List *movements = ll_createFirstNode(-1);
	List *plays;
	bool miss_tile = false;
	int selected_tile = -1;
	
	while(!miss_tile) {
		srand(time(NULL));
		ll_add(movements, generate_movement());
		animate_movements(movements);
		textcolor(LIGHTGRAY);
		textbackground(BLACK);
		int mov_length = ll_length(movements);
		for(i = 1; i < mov_length; i++) {
			selected_tile = select_options(options, sizeof(options), coord_set_position(1, base_dim.height + 1));
//			printf("selected_tile = %d\nmovement[%d] = %d", selected_tile, i, ll_get(movements, i)->data);
			if(selected_tile != ll_get(movements, i)->data + 1) {
				selected_tile = 0;
				break;
			}
		}
		if(selected_tile == 0) {
			break;
		}
		Sleep(600);
	}
	
	for(i = 0; i < l; i++) {
		destroy_dtext(options[i]);
	}
	
	return true;
}
