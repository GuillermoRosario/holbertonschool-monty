#include <stdio.h>
#include <stdlib.h>
#include "monty.h"



void push(stack_t** head, int value)
{
    stack_t* newNode= (stack_t*)malloc(sizeof(stack_t));
    if (newNode == NULL)
    {
     fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);   
    }
    newNode->n = value;
    newNode->prev = NULL;
    newNode->next = *head;
    if(*head != NULL)
    {
        (*head)->prev= newNode;
    }
    *head = newNode;
}
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