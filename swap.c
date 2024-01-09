#include "monty.h"

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *next_node;
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	next_node = (*stack)->next;
	temp = (*stack)->n;
	(*stack)->n = next_node->n;
	next_node->n = temp;
}
