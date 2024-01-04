#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL; /*Initialize the stack*/
	char *opcode = NULL; /*Tokenize the line to get the instruction (opcode)*/
	int i;

	if (argc != 2) /*Check if the correct number of arguments is provided*/
	{
		fprintf(stderr, "Usage: %s file\n", argv[0]);
		return EXIT_FAILURE;
	}

	file = fopen(argv[1], "r"); /*Open the file specified in the argument*/
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return EXIT_FAILURE;
	}

	while ((getline(&line, &len, file)) != -1) /*Read lines from the file until the end*/
	{
		line_number++;
		opcode = strtok(line, " \n"); /*Tokenize the line to get the instruction (opcode)*/
		if (opcode == NULL || *opcode == '#')
		{
			continue; /*Ignore empty lines*/
		}

		instruction_t my_instructions[] = {
			{"push", push},
			{"pall", pall},
			{"pop", pop},
			{NULL, NULL}
		};
		
		i = 0;
		while (my_instructions[i].opcode != NULL) /*Search for the instruction in the array*/
		{
			if (strcmp(opcode, my_instructions[i].opcode) == 0)
			{
				my_instructions[i].f(&stack, line_number);
				break;
			}
			i++;
		}

		if (my_instructions[i].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			free(line);
			fclose(file);
			free_stack(&stack);
			return EXIT_FAILURE;
		}
	}

	free(line);
	fclose(file);
	free_stack(&stack);
	return EXIT_SUCCESS;
}
