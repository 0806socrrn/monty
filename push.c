#include "monty.h"
/**
 * @brief
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *node1;
    (void)line_number;

    node1 = malloc(sizeof(stack_t));
    if (node1 == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    /*Validate if the number is a number*/
    node1->n = atoi(global_stack);
    node1->prev = NULL;
    node1->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = node1;
    *stack = node1;
}

void pop(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    if ((*stack)->next == NULL)
        free(*stack), *stack = NULL;
    else
    {
        stack_t *temp = *stack;
        *stack = (*stack)->next;
        (*stack)->prev = NULL;
        free(temp);
    }
}
