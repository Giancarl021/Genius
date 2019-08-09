#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define base_dim (Dim){38, 19}

#include "lib_load.h"

int main() {
	char *c;
	set_cursor("hide");
	draw_base();
	animate_tile(tile_dim, tile_coords[0], GREEN, LIGHTGREEN, notes[0]);
	gotoxy(1, base_dim.height);
	printf("\n");
	textbackground(BLACK);
	set_cursor("show");
}
