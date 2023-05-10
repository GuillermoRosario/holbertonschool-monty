#include "monty.h"

int number;
/**
 * push_stack -push (add) node to list.
 *Description: Function that push a new node at the beginning of stack_t stack
 * @head: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void push_stack(stack_t **head, unsigned int line_number)
{
	stack_t *newNode;

	(void) line_number;
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
		malloc_error();

	newNode->n = number;
	newNode->prev = NULL;
	if (*head == NULL)  /* validate if empty stack */
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else /* if is not empty stack */
	{
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
	}
}
/**
 * pall_stack -print.
 *Description: Function that print the elements of a stack
 * @head: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pall_stack(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = *head;
	(void)line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * free_stack -free list.
 *Description: Function that frees a dlist_t list
 * @head: top of the stack. (head)
 * Return: void
 **/
void free_stack(stack_t *head)
{
	stack_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
/**
 * pint_stack -print.
 * Description: Function that print the valueat top of stack
 * @head: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pint_stack(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = *head;

	if (tmp != NULL)
		printf("%d\n", tmp->n);
	else
		pint_error(line_number);
}
/**
 * pop_stack -print.
 * Description: Function that pop (delete) the value at top of stack
 * @head: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pop_stack(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *head;
	if (*head == NULL)
		pop_error(line_number);

	tmp = tmp->next;
	free(*head);
	*head = tmp;
}