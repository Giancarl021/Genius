void set_cursor(char visibility[]) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	if(!strcmp(visibility, "hide")) info.bVisible = FALSE;
	else info.bVisible = TRUE;
	SetConsoleCursorInfo(handle, &info);
}

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
