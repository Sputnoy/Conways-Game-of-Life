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

	//block(20,10);
	//beacon(5,5);
	//blinker(10,5);
	gosper_glider_gun(1,5);
	/*gosper_glider_gun(40,5);
	gosper_glider_gun(79,5);
	gosper_glider_gun(118,5);
	gosper_glider_gun(157,5);*/

	gosper_glider_gun_rotate90(50,50);

	//gosper_glider_gun_flipY(1,50);
	/*gosper_glider_gun_flipY(40,100);
	gosper_glider_gun_flipY(79,100);
	gosper_glider_gun_flipY(118,100);
	gosper_glider_gun_flipY(157,100);*/
	//infinite(50,50);
	/*LWSS(50,50);
	LWSS(50,60);
	LWSS(50,70);*/ 
	//glider(21,5);
	//glider(30,5);
	//glider(40,5);
	//glider_flip(18,15);
	//glider_flip(30,15);
	//glider_flip(40,10);
	//block(26,9);

	print_space();
	refresh();
	getch();

	run_life(500);
	mvaddstr(0,0,"Done");

	getch();
	endwin();

	//debug();
}