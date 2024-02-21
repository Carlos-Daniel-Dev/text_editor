#include <ncurses.h>

void type(char character)
{
	printw("%c", character);
}

void start_screan()
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	printw("Crunch started\n");

    int character;
    while ((character = getch()) != 'q') {
        type(character);
    }

    endwin();
}