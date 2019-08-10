#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define base_dim (Dim){38, 19}

#include "lib.h"

int main() {
	set_cursor("hide");
	draw_base();
	bool exit = false;
	
	while(!exit) {
		exit = match();
	}
	
	gotoxy(1, base_dim.height + 5);
	textbackground(BLACK);
	textcolor(LIGHTGRAY);
	printf("\n");
	set_cursor("show");
	return 0;
}
