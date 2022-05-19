#include "monty.h"
/**
 * @brief
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *node1;
    char *new_num;
    if (new_num == NULL)
    {
        printf("L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }
    node1 = malloc(sizeof(stack_t));
    if (node1 == NULL)
    {
        printf("Error\n");
        exit(EXIT_FAILURE);
    }
    node1->n = atoi(new_num);
    node1->prev = NULL;
    node1->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = node1;
    *stack = node1;
}