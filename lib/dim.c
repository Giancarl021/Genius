Dim dim_setSize(int width, int height) {
	return (Dim){width, height};
}

void dim_fillArea(Dim area, int x, int y, int color) {
	int i, j;
	textbackground(color);
	gotoxy(x, y);
	for(i = 0; i < area.height; i++) {
		gotoxy(x, y + i);
		for(j = 0; j < area.width; j++) {
			printf(" ");
		}
	}
}

Coord coord_setPosition(int x, int y) {
	return (Coord){x, y}
}
