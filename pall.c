#include "monty.h"
/**
 * @brief 
 * 
 */
void add(stack_t **stack, unsigned int line_number)
{
    stack_t *top = *stack;
    (void) line_number;

    while (top)
    {
        printf("%i\n");

        top = top->next;
    }
}