void animate_tile(Dim dimension, Coord coordinates, int color, int blink_color, int sound_frequency) {
	draw_tile(dimension, coordinates, blink_color);
	Beep(sound_frequency, ani_delay);
	draw_tile(dimension, coordinates, color);
}
