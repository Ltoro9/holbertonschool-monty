#include "monty.h"

/**
 * free_stack - Frees the memory used by the stack elements
 * @stack: Pointer to the stack
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*stack = NULL;
}

