#include "monty.h"
/**
 * @brief
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *node1;

    node1 = malloc(sizeof(stack_t));
    if (node1 == NULL)
    {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }
    node1->n = global_stack;
    node1->prev = NULL;
    node1->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = node1;
    *stack = node1;
}