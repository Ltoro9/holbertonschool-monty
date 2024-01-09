#include "instructions.h"

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
