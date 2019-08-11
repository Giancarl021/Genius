void test_colors(void) {
	int i;
	for(i = 0; i < 16; i++) {
		textbackground(i);
		printf("  ");
	}
	textbackground(BLACK);
}

int generate_movement(void) {
	return rand() % 4;
}
