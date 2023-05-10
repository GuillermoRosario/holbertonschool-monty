#include "monty.h"
/**
 *_swap -main entry.
 *Description: Function that swaps the top 2 elements of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _swap(stack_t **top, unsigned int line_number)
{
	int num;

	if (*top == NULL || (*top)->next == NULL)
		swap_error(line_number);

	num = (*top)->n;
	(*top)->n = (*top)->next->n;
	(*top)->next->n = num;
}
/**
 *_add -main entry.
 *Description: Function that adds the top two elements of the stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _add(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next == NULL)
		add_error(line_number);

	tmp = (*top)->next;
	tmp->n += (*top)->n;
	pop_stack(top, line_number);
}
/**
 * _nop -main entry.
 * Description: Doesnt do anything
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _nop(stack_t **top, unsigned int line_number)
{
	(void) top;
	(void) line_number;
}
