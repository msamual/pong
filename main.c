#include "header.h"

bool checkScore(int *ballX, int *ballY, int *leftPlayerScore, int *rightPlayerScore)
{
    if (*ballX == 0)
    {
        (*rightPlayerScore)++;
    }
    else if (*ballX == MAP_SIZE_X + 1)
    {
        (*leftPlayerScore)++;
    }
    else
        return false;

    if (*leftPlayerScore == 21)
        mvprintw(10, 32, "LEFT PLAYER WINS");
    else if (*rightPlayerScore == 21)
        mvprintw(10, 32, "RIGHT PLAYER WINS");
    else
        return true;
        
    mvprintw(0, 38, "%d:%d", *leftPlayerScore, *rightPlayerScore);
    refresh();
    sleep(15);
    quitGame(0);
}

int main(int argc, char **argv, char **envp)
{
    char c;
    int leftrocket = 12, rightrocket = 12;
    int  ballY = 13, ballX = 41, ballDirectionY = 1, ballDirectionX = 1;
    int leftPlayerScore = 0, rightPlayerScore = 0;
    
    keypad(initscr(), true);
	noecho();
    curs_set(0);
    halfdelay(1);
    while (true)
    {
        draw(leftrocket, rightrocket, ballY, ballX);
       	mvprintw(0, 38, "%d:%d", leftPlayerScore, rightPlayerScore);
        refresh();
        c = getch();
        if (c == 27)
		    break;
        moveRockets(c, &leftrocket, &rightrocket);
        moveBall(&ballY, &ballX, &ballDirectionY, &ballDirectionX, leftrocket, rightrocket);
        if (checkScore(&ballX, &ballY, &leftPlayerScore, &rightPlayerScore))
        {
            leftrocket = 12,
            rightrocket = 12,
            ballY = 13,
            ballX = 41;
            ballDirectionY = 1,
            ballDirectionX = 1;
        }
    }
    quitGame(0);
	return 0;
}
