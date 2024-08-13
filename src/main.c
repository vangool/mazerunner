/**
 * File: main.c
 *
 * Sets up the game and handles user inputs.
 *
 * @author: Michael VG
 * @updatedlast: 2024/08/12
 *
 */
#include <stdio.h>

#include "maze.h"
#include "utils/result_codes.h"

/**
 * Driver function to handle user input and maze game
 */
int main()
{
	if(start_maze() != SUCCESS)
		fprintf(stdout, "Error Generating Maze\n");

	return 0;
}
