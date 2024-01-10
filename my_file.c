#include "monty.h"

/**
 * my_file - Opens a file and handles potential errors
 * @file: Pointer to the file to be opened
 * @argv: Array of arguments passed to the program
 */

void my_file(FILE *file, char **argv)
{
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
