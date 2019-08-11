#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define base_dim (Dim){38, 19}

#include "lib.h"

int main() {
	_setcursortype(_NOCURSOR);
	draw_base();
	bool exit = false;
	
	while(!exit) {
		exit = match();
	}
	
	gotoxy(1, base_dim.height + 5);
	textbackground(BLACK);
	textcolor(LIGHTGRAY);
	printf("\n");
	_setcursortype(_NORMALCURSOR);
	return 0;
}
