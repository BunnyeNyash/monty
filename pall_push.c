#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	/* Check if argument is provided */
	if (!bus.arg)
	{
		fprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	int number = atoi(bus.arg);

	addnode(stack, number);
}


/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *current;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
