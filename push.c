#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to the stack
 * @line_number: line number in the file
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \n");
	int num;
	stack_t *new_node;

	if (arg == NULL || *arg == '\0' || !isdigit(*arg))
	{
		fprintf(stderr, "Line%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(arg);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}
