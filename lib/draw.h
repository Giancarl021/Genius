typedef struct {
	Dim dimension;
	Coord coordinates;
	int color;
	int blink_color;
} Tile;

typedef struct {
	char *text;
	int color;
} DText;

Tile tiles[4] = {
	{
		{16, 8},
		{3, 2},
		GREEN,
		LIGHTGREEN
	},
	{
		{16, 8},
		{21, 2},
		RED,
		LIGHTRED
	},
	{
		{16, 8},
		{3, 11},
		BROWN,
		YELLOW
	},
	{
		{16, 8},
		{21, 11},
		BLUE,
		LIGHTBLUE
	}
};

void draw_base(void);

void draw_tile(Tile tile);

DText *new_dtext(const char* text, int color);

void draw_dtext(DText *dtext);

void destroy_dtext(DText *dtext);

int draw_options(DText *options[], int dtext_arr_size);
