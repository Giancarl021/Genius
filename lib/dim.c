Dim dim_setSize(int width, int height) {
	return (Dim){width, height};
}

void fill_area(Dim area, Coord coordinates, int color) {
	int i, j;
	textbackground(color);
	gotoxy(coordinates.x, coordinates.y);
	for(i = 0; i < area.height; i++) {
		gotoxy(coordinates.x, coordinates.y + i);
		for(j = 0; j < area.width; j++) {
			printf(" ");
		}
	}
}

Coord coord_setPosition(int x, int y) {
	return (Coord){x, y};
}
