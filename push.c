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