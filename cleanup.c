#include "monty.h"

/**
 * cleanup_resources - Clean up allocated resources
 * @file: File pointer to close
 * @line: Allocated memory for the line
 * @stack: Pointer to the stack to free
 */

void cleanup_resources(FILE *file, char *line, stack_t **stack)
{
	free(line);
	fclose(file);
	free_stack(stack);
}
