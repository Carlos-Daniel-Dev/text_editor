#include <ncurses.h>

void type(char character)
{
	printw("%c", character);
}

void untype()
{
	printw("\b \b");
}

int start_screan()
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    printw("Crunch started\n");

    int character;
    while ((character = getch()) != 'q') {
        if (character == KEY_BACKSPACE || character == 127) 
            untype();
        else
            type(character);
    }

    endwin();

    return 0;
}