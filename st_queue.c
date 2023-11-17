#include "monty.h"



/*int check_mode(stack_t *stack)
{
    if (stack->n == STACK)
        return STACK;
    else if (stack->n == QUEUE)
        return QUEUE;
    return STACK; 
}*/
int current_mode = STACK_MODE;

/* Function to set the mode to stack */
void stack_op(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;

    current_mode = STACK_MODE;
}


/* Function to set the mode to queue */
void queue_op(stack_t **stack, unsigned int line_number)
{
    (void)stack; 
    (void)line_number; 

    current_mode = QUEUE_MODE;
}

/* Function to check the current mode */
int get_mode()
{
    return current_mode;
}