#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define base_dim (Dim){38, 19}

#include "lib.h"

int main() {
	
	set_cursor("hide");
	draw_base();
	int i;
	for(i = 0; i < 4; i++) animate_tile(tiles[i], notes[i]);
	// Finalização
	gotoxy(1, base_dim.height);
	printf("\n");
	textbackground(BLACK);
	set_cursor("show");
}

void init(void) {
	List *jogadas;
}
