#include "monty.h"

void (*get_method(char *method, unsigned int line_number))(stack_t **stack, unsigned int line_number)
{
	instruction_t methods[] = {
			{"push", push},
			{"pall", pall},
			{"pint", pint},
			{"pop", pop},
			{"add", add},
			{"swap", swap},
			{NULL, NULL},
	};

	int i = 0;
	while (methods[i].opcode != NULL)
	{
		if (strcmp(methods[i].opcode, method) == 0)
			return (methods[i].f);
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, method);
	exit(EXIT_FAILURE);
}
