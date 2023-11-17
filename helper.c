#include "monty.h"


/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */
/*int _atoi(char *s)
{
    int sign = 1;
    unsigned int result = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            result = (result * 10) + (*s - '0');
        }
        else
        {
            break; 
        }

        s++; 
    }

    return sign * (int)result;
}
*/

/**
 * is_integer - checks if a string is  valid integer
 * @str: string to check 
 * Return: 1 if the string is a valid integer, 0 otherwise 
*/

int is_integer(char *str)
{
    if (!str)
        return 0;

    if (*str == '-')
        str++;

    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }

    return 1;
}