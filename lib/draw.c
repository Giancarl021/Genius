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
