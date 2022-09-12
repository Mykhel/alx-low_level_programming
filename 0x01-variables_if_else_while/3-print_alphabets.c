#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 (Successful)
 */
int main(void)
{
char ch = 'a';
char cb = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (cb = 'A'; cb <= 'Z'; cb++)
putchar(cb);
putchar('\n');
return (0);
}
