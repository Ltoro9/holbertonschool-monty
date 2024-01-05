#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	int temp;

	if (top == NULL || top->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *next_node = top->next;
	temp = top->n;
	top->n = next_node->n;
	next_node->n = temp;
}

