#include "main.h"

/**
 * print_alphabet -  entry point
 *
 * Return: 0 Always
 */



void print_alphabet(void)
{
char c = 'a';
int i;

    for (i = 0; i < 26; i++)
    {
        putchar(c + i);
    }
    putchar(10);
}
