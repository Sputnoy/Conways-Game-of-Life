const int x_size = 250;
const int y_size = 250;
int neighbours;
int counter = 0;

int space[2][y_size][x_size];

void clear_space(){
	for (int l = 0; l < 2; l++){
		for (int i = 0; i < y_size; i++){
			for(int i2 = 0; i2 < x_size; i2++){
				space[l][i][i2] = 0;
			}
		}
	}
}

void print_space(){
	for (int i3 = 0; i3 < y_size; i3++){
		for(int i4 = 0; i4 < x_size; i4++){
			if (space[0][i3][i4] == 1){
				mvaddch(i3,i4,'#');
			}
		}
	}

}

void life(){
	for (int i5 = 0; i5 < y_size; i5++){
		for(int i6 = 0; i6 < x_size; i6++){
			neighbours = space[0][i5 + 1][i6 - 1] + space[0][i5 + 1][i6] + space[0][i5 + 1][i6 + 1] + space[0][i5][i6 - 1] + space[0][i5][i6 + 1] + space[0][i5 - 1][i6 - 1] + space[0][i5 - 1][i6] + space[0][i5 - 1][i6 + 1];
			//space[15][15] = 1;
			if (space[0][i5][i6] == 1){
				if (neighbours < 2 || neighbours > 3){
					space[1][i5][i6] = 0;
					//space[15][15] = 2;
					
				}else{
					space[1][i5][i6] = 1;
				}
				std::cout << "e\n";
			}else{
				if (neighbours == 3){
					space[1][i5][i6] = 1;
					std::cout << "f\n";
				}
			}
		}
	}

}

void pull_layer(){
	for (int k = 0; k < y_size; k++){
		for(int k2 = 0; k2 < x_size; k2++){
			space[0][k][k2] = space[1][k][k2];
		}
	}
}

void run_life(int cycles){
	for (int j = 0; j < cycles; j++){
		life();
		pull_layer();
		clear();
		print_space();
		//mvaddch(20,20,'e');
		//std::cout << neighbours << "\n";
		refresh();
		std::this_thread::sleep_for(std::chrono::milliseconds(65));
	}
}

void debug(){
	life();
	//pull_layer();
	//life();
	//pull_layer();
	std::cout << space[0][13][7] << "\n";
	std::cout << space[0][12][7] << "\n";
	std::cout << space[1][13][7] << "\n";
}