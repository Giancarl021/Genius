void draw_base(void) {
	int i, color[4] = {GREEN, RED, YELLOW, BLUE};
	
	fill_area(base_dim, (Coord){1,1}, WHITE);
	
	for(i = 0; i < 4; i++) {
		draw_tile(tiles[i]);
	}
}

void draw_tile(Tile tile) {
	fill_area(tile.dimension, tile.coordinates, tile.color);
}

DText *new_dtext(const char* text, int color) {
	DText *dtext = malloc(sizeof(dtext));
	dtext->text = malloc(strlen(text) + 1);
	strcpy(dtext->text, text);
	dtext->color = color;
	return dtext;
}

void draw_dtext(DText *dtext) {
	textcolor(dtext->color);
	printf("%s", dtext->text);
}

void destroy_dtext(DText *dtext) {
	free(dtext->text);
	free(dtext);
}

int draw_options(DText *options[], int dtext_arr_size) {
	int i;
	for(i = 0; i < dtext_arr_size / 8; i++) {
		draw_dtext(options[i]);
	}
	return i;
}
