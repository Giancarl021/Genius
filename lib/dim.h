typedef struct {
	int width;
	int height;
} Dim;

typedef struct {
	int x;
	int y;
} Coord;

Dim dim_setSize(int width, int height);

void fill_area(Dim area, Coord coordinates, int color);

Coord coord_setPosition(int x, int y);
