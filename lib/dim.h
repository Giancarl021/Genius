typedef struct {
	int width;
	int height;
} Dim;

typedef struct {
	int x;
	int y;
} Coord;

Dim dim_setSize(int width, int height);

void dim_fillArea(Dim area, int x, int y, int color);

Coord coord_setPosition(int x, int y);
