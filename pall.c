#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

#include "monty.h"

/**
 * pall - prints all values on the stack, starting from the top
 * @stack: double pointer to the top of the stack
 * @line_number: line number of the opcode in the Monty file
 */

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    (void)line_number;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}
