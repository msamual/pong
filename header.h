#ifndef HEADER_H
 #define HEADER_H

 #define MAP_SIZE_X 80
 #define MAP_SIZE_Y 25

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <termios.h>
#include <fcntl.h>
#include <time.h>
#include <ncurses.h>


void 	init(int ac, char **av, char **envp);
void	initMap(char **map);
void	printMap(char **map);

#endif
