int x;
int y;

void block(int x,int y){
	space[0][y][x] = 1;
	space[0][y][x+1] = 1;
	space[0][y+1][x] = 1;
	space[0][y+1][x+1] = 1;
}

void beacon(int x,int y){
	block(x,y);
	block(x+2,y+2);
}

void blinker(int x,int y){
	space[0][y][x] = 1;
	space[0][y][x+1] = 1;
	space[0][y][x+2] = 1;
}

void glider(int x,int y){
	space[0][y][x] = 1;
	space[0][y+1][x] = 1;
	space[0][y+1][x-1] = 1;
	space[0][y+2][x-1] = 1;
	space[0][y][x-2] = 1;
}

void glider_flip(int x,int y){
	space[0][y][x] = 1;
	space[0][y-1][x] = 1;
	space[0][y-1][x-1] = 1;
	space[0][y-2][x-1] = 1;
	space[0][y][x-2] = 1;
}

void eater(int x, int y){
	space[0][y][x] = 1;
	space[0][y-1][x] = 1;
	space[0][y-1][x+1] = 1;

	space[0][y][x+2] = 1;
	space[0][y+1][x+2] = 1;
	space[0][y+2][x+2] = 1;
	space[0][y+2][x+3] = 1;
}

void gosper_glider_gun(int x,int y){
	block(x-1,y);

	space[0][y][x+9] = 1;
	space[0][y+1][x+9] = 1;
	space[0][y+2][x+9] = 1;

	space[0][y-1][x+10] = 1;
	space[0][y+3][x+10] = 1;

	space[0][y-2][x+11] = 1;
	space[0][y+4][x+11] = 1;
	space[0][y-2][x+12] = 1;
	space[0][y+4][x+12] = 1;

	space[0][y+1][x+13] = 1;

	space[0][y-1][x+14] = 1;
	space[0][y+3][x+14] = 1;

	space[0][y][x+15] = 1;
	space[0][y+1][x+15] = 1;
	space[0][y+2][x+15] = 1;

	space[0][y+1][x+16] = 1;

	space[0][y-2][x+19] = 1;
	space[0][y-1][x+19] = 1;
	space[0][y][x+19] = 1;
	space[0][y-2][x+20] = 1;
	space[0][y-1][x+20] = 1;
	space[0][y][x+20] = 1;

	space[0][y-3][x+21] = 1;
	space[0][y+1][x+21] = 1;

	space[0][y-4][x+23] = 1;
	space[0][y-3][x+23] = 1;
	space[0][y+1][x+23] = 1;
	space[0][y+2][x+23] = 1;

	block(x+33,y-2);
}

void gosper_glider_gun_flipY(int x,int y){
	block(x-1,y-1);

	space[0][y][x+9] = 1;
	space[0][y-1][x+9] = 1;
	space[0][y-2][x+9] = 1;

	space[0][y+1][x+10] = 1;
	space[0][y-3][x+10] = 1;

	space[0][y+2][x+11] = 1;
	space[0][y-4][x+11] = 1;
	space[0][y+2][x+12] = 1;
	space[0][y-4][x+12] = 1;

	space[0][y-1][x+13] = 1;

	space[0][y+1][x+14] = 1;
	space[0][y-3][x+14] = 1;

	space[0][y][x+15] = 1;
	space[0][y-1][x+15] = 1;
	space[0][y-2][x+15] = 1;

	space[0][y-1][x+16] = 1;

	space[0][y+2][x+19] = 1;
	space[0][y+1][x+19] = 1;
	space[0][y][x+19] = 1;
	space[0][y+2][x+20] = 1;
	space[0][y+1][x+20] = 1;
	space[0][y][x+20] = 1;

	space[0][y+3][x+21] = 1;
	space[0][y-1][x+21] = 1;

	space[0][y+4][x+23] = 1;
	space[0][y+3][x+23] = 1;
	space[0][y-1][x+23] = 1;
	space[0][y-2][x+23] = 1;

	block(x+33,y+1);
}

void gosper_glider_gun_rotate90(int x,int y){
	block(x,y-1);

	space[0][y+9][x] = 1;
	space[0][y+9][x+1] = 1;
	space[0][y+9][x+2] = 1;

	space[0][y+10][x-1] = 1;
	space[0][y+10][x+3] = 1;

	space[0][y+11][x-2] = 1;
	space[0][y+11][x+4] = 1;
	space[0][y+12][x-2] = 1;
	space[0][y+12][x+4] = 1;

	space[0][y+13][x+1] = 1;

	space[0][y+14][x-1] = 1;
	space[0][y+14][x+3] = 1;

	space[0][y+15][x] = 1;
	space[0][y+15][x+1] = 1;
	space[0][y+15][x+2] = 1;

	space[0][y+16][x+1] = 1;

	space[0][y+19][x-2] = 1;
	space[0][y+19][x-1] = 1;
	space[0][y+19][x] = 1;
	space[0][y+20][x-2] = 1;
	space[0][y+20][x-1] = 1;
	space[0][y+20][x] = 1;

	space[0][y+21][x-3] = 1;
	space[0][y+21][x+1] = 1;

	space[0][y+23][x-4] = 1;
	space[0][y+23][x-3] = 1;
	space[0][y+23][x+1] = 1;
	space[0][y+23][x+2] = 1;

	block(x-2,y+33);
}

void gosper_glider_gun_rotate90_Up(int x,int y){
	block(x,y);

	space[0][y-9][x] = 1;
	space[0][y-9][x+1] = 1;
	space[0][y-9][x+2] = 1;

	space[0][y-10][x-1] = 1;
	space[0][y-10][x+3] = 1;

	space[0][y-11][x-2] = 1;
	space[0][y-11][x+4] = 1;
	space[0][y-12][x-2] = 1;
	space[0][y-12][x+4] = 1;

	space[0][y-13][x+1] = 1;

	space[0][y-14][x-1] = 1;
	space[0][y-14][x+3] = 1;

	space[0][y-15][x] = 1;
	space[0][y-15][x+1] = 1;
	space[0][y-15][x+2] = 1;

	space[0][y-16][x+1] = 1;

	space[0][y-19][x-2] = 1;
	space[0][y-19][x-1] = 1;
	space[0][y-19][x] = 1;
	space[0][y-20][x-2] = 1;
	space[0][y-20][x-1] = 1;
	space[0][y-20][x] = 1;

	space[0][y-21][x-3] = 1;
	space[0][y-21][x+1] = 1;

	space[0][y-23][x-4] = 1;
	space[0][y-23][x-3] = 1;
	space[0][y-23][x+1] = 1;
	space[0][y-23][x+2] = 1;

	block(x-2,y-34);
}

void infinite(int x, int y){
	space[0][y][x] = 1;

	space[0][y-1][x+2] = 1;
	space[0][y][x+2] = 1;

	space[0][y-4][x+4] = 1;
	space[0][y-3][x+4] = 1;
	space[0][y-2][x+4] = 1;

	space[0][y-5][x+6] = 1;
	space[0][y-4][x+6] = 1;
	space[0][y-3][x+6] = 1;

	space[0][y-4][x+7] = 1;
}

void LWSS(int x, int y){
	space[0][y][x] = 1;
	space[0][y+2][x] = 1;

	space[0][y+3][x+1] = 1;
	space[0][y+3][x+2] = 1;
	space[0][y+3][x+3] = 1;
	space[0][y+3][x+4] = 1;
	space[0][y+3][x+5] = 1;

	space[0][y+2][x+5] = 1;
	space[0][y+1][x+5] = 1;

	space[0][y][x+4] = 1;
}