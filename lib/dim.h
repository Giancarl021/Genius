typedef struct {
	int width;
	int height;
} Dim;

typedef struct {
	int x;
	int y;
} Coord;

Dim dim_set_size(int width, int height);

void fill_area(Dim area, Coord coordinates, int color);

Coord coord_set_position(int x, int y);
