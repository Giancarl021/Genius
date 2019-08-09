typedef struct {
	int width;
	int height;
} Dim;

Dim dim_setSize(int width, int height);

void dim_fillArea(Dim area, int x, int y, int color);
