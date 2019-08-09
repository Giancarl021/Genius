void drawBase(void) {
	dim_fillArea(base_dim, 1, 1, WHITE);
	dim_fillArea((Dim){16, 8}, 3, 2, GREEN);
	dim_fillArea((Dim){16, 8}, 22, 2, RED);
	dim_fillArea((Dim){16, 8}, 3, 11, YELLOW);
	dim_fillArea((Dim){16, 8}, 22, 11, BLUE);
}
