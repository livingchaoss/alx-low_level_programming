#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recusrion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    putchar(*s);
    _puts_recusrion(s + 1);
}
