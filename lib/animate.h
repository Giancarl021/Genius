const int ani_delay = 600;
const int notes[4] = {164.814, 440, 277.183, 329.628};

void animate_tile(Tile tile, int sound_frequency);

void animate_movements(List *movements);

int select_options(DText *options[], int dtext_arr_size, Coord position);
