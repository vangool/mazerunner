/**
 * File: maze.h
 *
 * Sets up and generates the board
 *
 * @author: Michael VG
 * @updatedlast: 2024/08/12
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils/result_codes.h"
#include "utils/utils.h"

#ifndef __MAZE_H__
#define __MAZE_H__

#define MAZE_SIZE 10
#define SPACE 0
#define WALL 1
#define PLAYERSTART 2
#define PLAYERFINISH 3

/**
 * Start and create the maze game
 *
 * @return: Status of function execution
 */
int start_maze();

#endif //__MAZE_H__
