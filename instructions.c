#include "instructions.h"

/**
 * get_instructions - Get the array of instructions
 *
 * Return: Pointer to the array of instructions
 */

instruction_t *get_instructions(void)
{
	static instruction_t my_instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{"add", add},
		{NULL, NULL}
	};

	return (my_instructions);
}
