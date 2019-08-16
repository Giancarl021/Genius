void animate_tile(Tile tile, int sound_frequency) {
	Tile blink_tile = tile;
	blink_tile.color = blink_tile.blink_color;
	draw_tile(blink_tile);
	Beep(sound_frequency, ani_delay);
	draw_tile(tile);
	Sleep(100);
}

void animate_movements(List *movements) {
	while(movements != NULL) {
		int index = movements->data;
		if(index != -1) {
			animate_tile(tiles[index], notes[index]);
		}
		movements = movements->next;
	}
}

int select_options(DText *options[], int dtext_arr_size, Coord position) {
	char choice;
	int l = dtext_arr_size / 8;
	gotoxy(position.x, position.y);
	draw_options(options, dtext_arr_size);
	
	bool choice_err = false;
	do {
		choice = getch() - 48;
		if((choice < 0 || choice > l - 1) && !choice_err) {
			textcolor(DARKGRAY);
			printf("[!] Escolha um valor dentro dos limites");
			choice_err = true;
		}
	} while(choice < 0 || choice > l - 1);
	if(choice_err) {
		gotoxy(position.x, position.y + l);
		printf("                                         ");
	}
	
	int index = choice == 0 ? l - 1 : choice - 1, color = options[index]->color;
	
	options[index]->color = WHITE;
	gotoxy(position.x, position.y + index);
	draw_dtext(options[index]);
	if(index != l - 1) {
		animate_tile(tiles[index], notes[index]);
	} else {
		Sleep(200);
	}
	options[index]->color = color;
	gotoxy(position.x, position.y + index);
	draw_dtext(options[index]);
	
	return choice;
}
