#include "header.h"

int main(int argc, char **argv, char **envp)
{
    char map[MAP_SIZE_Y + 2][MAP_SIZE_X + 2];

    initscr();
    noecho();
    initMap(map);
    printMap(map);
    refresh();
    sleep(5);
    endwin();
	return 0;
}
