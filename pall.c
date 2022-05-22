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

void pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        printf("L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}
