void animate_tile(Tile tile, int sound_frequency) {
//	set_cursor("hide");
	Tile blink_tile = tile;
	blink_tile.color = blink_tile.blink_color;
	draw_tile(blink_tile);
	Beep(sound_frequency, ani_delay);
	draw_tile(tile);
//	set_cursor("show");
}
