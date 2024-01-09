#include "monty.h"

void cleanup_resources(FILE *file, char *line, stack_t **stack)
{
	free(line);
	fclose(file);
	free_stack(stack);
}
