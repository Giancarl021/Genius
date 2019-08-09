void drawBase(void) {
	dim_fillArea(base_dim, 1, 1, WHITE);
	dim_fillArea(tile_dim, tile_coords[0].x, tile_coords[0].y, GREEN);
	dim_fillArea(tile_dim, tile_coords[1].x, tile_coords[1].y, RED);
	dim_fillArea(tile_dim, tile_coords[2].x, tile_coords[2].y, YELLOW);
	dim_fillArea(tile_dim, tile_coords[3].x, tile_coords[3].y, BLUE);
}
