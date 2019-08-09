#include <stdio.h>
#include <stdlib.h>

#define base_dim (Dim){38, 19}

#include "lib/conio.h"
#include "lib/conio.c"
#include "lib/dim.h"
#include "lib/dim.c"
#include "lib/draw.h"
#include "lib/draw.c"

int main() {
	drawBase();
	gotoxy(1, base_dim.height);
	printf("\n");
	textbackground(BLACK);
}
