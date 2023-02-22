#include <unistd.h>

/**
 * main - entry point
 * print _putchar
 *
 * Return: 0 Always
 */
int _putchar(char c)
{
        return(write(1, &c,1));
}
