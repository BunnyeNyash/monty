#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @head: Double pointer to the head of the stack.
 * @number: Line number in the file.
 */
void f_pint(stack_t **head, unsigned int number)
{
	if (*head== NULL)
	{
		fprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", number);
		exit(EXIT_FAILURE);
	}
	
	printf("%d\n", (*head)->n);
}
