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

void queue_push(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;

    if (*stack == NULL)
    {
        new_node->next = NULL;
        *stack = new_node;
    }
    else
    {
        stack_t *last = *stack;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
        new_node->next = NULL;
    }
}
