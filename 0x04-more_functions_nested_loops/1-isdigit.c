#include "main.h"
/**
 * isdigit - checks if input is digit between number 0 - 9
 * 
 * @c: input
 *
 * Return: 1 if its digit and 0 if not
 * /

int _isdigit(int c)
{
char item;
for (item = 0; item <= 9; item++)
{
	if (item == 0)
	{
	return (1);
	}
}
return (0);
}
