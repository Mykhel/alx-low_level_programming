#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0 (if successful)
 */
int main(void)
{
int n;
rand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}