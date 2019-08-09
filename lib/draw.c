void drawBase(void) {
	int i, color[4] = {GREEN, RED, YELLOW, BLUE};
	
	fill_area(base_dim, (Coord){1,1}, WHITE);
	
	for(i = 0; i < 4; i++) {
		drawTile(tile_dim, tile_coords[i], color[i]);
	}
}

void drawTile(Dim dimension, Coord coordinates, int color) {
	fill_area(dimension, coordinates, color);
}
