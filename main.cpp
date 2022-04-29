#include <iostream>
#include <thread>
#include <curses.h>
#include "life.cpp"
#include "life_shapes.cpp"

int main(){
	bool interrupt = true;
	char input;

	initscr();
	cbreak();
	noecho();
	curs_set(0);

	clear();

	clear_space();

	gosper_glider_gun(1,15);
	//gosper_glider_gun(60,5);

	gosper_glider_gun_rotate90_Up(31,70);
	gosper_glider_gun_rotate90_Up(50,110);

	print_space();
	refresh();
	getch();

	run_life(1000);
	mvaddstr(0,0,"Done");

	getch();
	endwin();

	//debug();
	//another git test
	//test
}