#include "header.h"

bool	rocketCollision(int y, int x, int leftRocket, int rightRocket)
{
	if (x == 1 && (y == leftRocket || y == leftRocket + 1 ||y == leftRocket + 2))
		return true;
	if (x == MAP_SIZE_X && (y == rightRocket || y == rightRocket + 1 ||y == rightRocket + 2))
		return true;
	return false;	
}

void 	moveBall(int *ballY, int *ballX, int *ballDirectionY, int *ballDirectionX, int leftRocket, int rightRocket)
{
	int y = *ballY + *ballDirectionY;
	int x = *ballX + *ballDirectionX;

	if (y == 0 || y == MAP_SIZE_Y + 1)
		*ballDirectionY *= -1;
	else
		*ballY = y;
	if (rocketCollision(y, x, leftRocket, rightRocket))
		*ballDirectionX *= -1;
	else
		*ballX = x;
}

void	moveRockets(char c, int *posLeft, int *posRight)
{
	if (c == KEY_LEFT_UP && *posLeft > 1)
		--*posLeft;
	else if (c == KEY_LEFT_DOWN && *posLeft < MAP_SIZE_Y -2)
		++*posLeft;
	else if (c == KEY_RIGHT_UP && *posRight > 1)
		--*posRight;
	else if (c == KEY_RIGHT_DOWN && *posRight < MAP_SIZE_Y -2)
		++*posRight;
}