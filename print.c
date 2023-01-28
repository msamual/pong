#include "header.h"

void	printMap(char **map)
{
	for (int y = 0; y < MAP_SIZE_Y; ++y)
	{
		for (int x = 0; x < MAP_SIZE_X + 2; ++x)
			mvaddch(y, x, map[y][x]);
	}
}