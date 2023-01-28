#include "header.h"

void init(int ac, char **av, char **envp)
{
}

void	initMap(char **map)
{
	for (int y = 0; y < MAP_SIZE_Y + 2; ++y)
	{
		for (int x = 0; x < MAP_SIZE_X + 2; ++x)
		{
			if (y == 0 || y == MAP_SIZE_Y + 1)
				map[y][x] = '-';
			else if (x == 0 || x == MAP_SIZE_X + 1)
			{
				map[y][x] = '#';
			}
			else
				map[y][x] = ' ';
		}
	}
	map[11][1] = '|';
	map[12][1] = '|';
	map[13][1] = '|';
	map[11][MAP_SIZE_X] = '|';
	map[12][MAP_SIZE_X] = '|';
	map[13][MAP_SIZE_X] = '|';
}