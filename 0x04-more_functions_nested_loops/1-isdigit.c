#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: The character that going to be checked
 * Return 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
    return(c >= '0' && c <= '9');
}