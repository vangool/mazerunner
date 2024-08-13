/**
 * File: maze.c
 *
 * Sets up and generates the board
 *
 * @author: Michael VG
 * @updatedlast: 2024/08/12
 *
 */

#include "maze.h"

/**
 * Translate the x, y coordinates into a one dimensional index
 *
 * @param xPos: X position of the coordinate
 * @param yPos: Y position of the coordinate
 * @return The coordinate on as a one dimensional index
 */
int translate_idx(int xPos, int yPos)
{
	return yPos * 10 + xPos;
}

/**
 * Print the maze map and player position
 *
 * @param maze: The maze to be printed
 */
void print_maze(int* maze)
{
	fprintf(stdout, " 0123456789\n");
	for(int i = -1; i <= MAZE_SIZE; i++)
	{
		for(int j = -1; j <= MAZE_SIZE; j++)
		{
			if(i == -1 || j == -1 || i == MAZE_SIZE || j == MAZE_SIZE)
			{
				fprintf(stdout, "*");
				continue;
			}
			switch(maze[translate_idx(j, i)])
			{
				case SPACE:
					fprintf(stdout, " ");
					break;
				case WALL:
					fprintf(stdout, "*");
					break;
				case PLAYERSTART:
					fprintf(stdout, "X");
					break;
				case PLAYERFINISH:
					fprintf(stdout, "F");
					break;
				default:
					fprintf(stdout, "(%d, %d)", translate_idx(j, i), maze[translate_idx(j, i)]);
			}
		}
		fprintf(stdout, "\n");
	}
}	

/**
 * Generate the maze map
 *
 * @param maze: The maze to be generated
 * @return: Status of function execution
 */
int generate_maze(int* maze)
{
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++)
			maze[translate_idx(j, i)] = SPACE;

	maze[30] = PLAYERSTART;
	maze[39] = PLAYERFINISH;

	return SUCCESS;
}


/**
 * Start and create the maze game
 *
 * @return: Status of function execution
 */
int start_maze()
{
	int* maze = (int*)malloc(sizeof(int) * 100);
	if(!maze)
		return FAIL;
	
	generate_maze(maze);
	print_maze(maze);
	free(maze);
	return SUCCESS;
}
