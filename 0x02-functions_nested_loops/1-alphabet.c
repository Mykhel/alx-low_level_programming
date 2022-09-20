#include "main.h"

/**

 * print_alphabet -  prints the lowercase alphabet

 *

 *

 * Return: void

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
