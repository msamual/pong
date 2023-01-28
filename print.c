#include "header.h"

void	printRow(int y, char c)
{
	for (int x = 0; x < MAP_SIZE_X + 2; ++x)
		mvaddch(y, x, c);
}

void	printColumn(int x, char c)
{
	for (int y = 0; y < MAP_SIZE_Y + 2; ++y)
		mvaddch(y, x, c);
}

void	printRocket(int y, int x)
{
	mvaddch(y, x, '|');
	mvaddch(y + 1, x, '|');
	mvaddch(y + 2, x, '|');
}

void	draw(int leftrocket, int rightrocket, int ballY, int ballX)
{
	for (int y = 0; y < MAP_SIZE_Y + 2; ++y)
	{
		printRow(y, ' ');
	}
	printRocket(leftrocket, 1);
	printRocket(rightrocket, MAP_SIZE_X);
	mvaddch(ballY, ballX, '0');
	printColumn(0, '#');
	printColumn(MAP_SIZE_X + 1, '#');
	printRow(0, '-');
	printRow(MAP_SIZE_Y + 1, '-');
}
