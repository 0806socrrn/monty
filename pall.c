#include "monty.h"
/**
 * @brief
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *top = *stack;
    (void)line_number;

    while (top)
    {
        printf("%d\n", top->n);

        top = top->next;
    }
}