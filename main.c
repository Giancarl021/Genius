#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define base_dim (Dim){38, 19}

#include "lib.h"

int main() {
	
	set_cursor("hide");
	draw_base();
	bool exit = false;
	
	
	gotoxy(1, base_dim.height);
	printf("\n");
	textbackground(BLACK);
	set_cursor("show");
	
	while(!exit) {
		exit = initMatch();
	}
}
