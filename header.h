#ifndef HEADER_H
 #define HEADER_H

 #define MAP_SIZE_X 80
 #define MAP_SIZE_Y 25
 
 #define KEY_LEFT_UP 'a'
 #define KEY_LEFT_DOWN 'z'
 #define KEY_RIGHT_UP 'k'
 #define KEY_RIGHT_DOWN 'm'

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <fcntl.h>
#include <time.h>
#include <ncurses.h>


char 	**init();
char	**initMap();
void	draw(int leftrocket, int rightrocket, int ballY, int ballX);
void    moveRockets(char c, int *posLeft, int *posRight);
void 	moveBall(int *ballY, int *ballX, int *ballDirectionY, int *ballDirectionX, int leftRocket, int rightRocket);
void	printScore(int leftPlayerScore, int rightPlayerScore);
void    quitGame(int errCode);

#endif
