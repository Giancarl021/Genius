#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define base_dim (Dim){38, 19}

#include "lib.h"

int main() {
	
	set_cursor("hide");
	draw_base();
	bool exit = -5;
	
	List *movements = ll_createFirstNode(-1);
	List *plays;
	
	
	while(exit) {
		int i;
	
		srand(time(NULL));
	
		ll_add(movements, generate_movement());
		animateMovements(movements);
		Sleep(600);
		exit++;
	}
	
	gotoxy(1, base_dim.height);
	printf("\n");
	textbackground(BLACK);
	set_cursor("show");
}
