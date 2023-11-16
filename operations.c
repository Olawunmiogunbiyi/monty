#include "monty.h"


void add(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n += (*stack)->n;
    pop(stack, line_number);
}



void nop(stack_t **stack, unsigned int line_number)
{
    /* The nop opcode doesn't do anything */
    (void)stack;
    (void)line_number;
}


