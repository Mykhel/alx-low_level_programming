#include "main.h"

/**
 * main - check the code
 * 
 * Return: Always 0
 */


char *_strcat(char *dest, char *src)
{
    int len1, len2, i;

    len1 = strlen(dest);
    len2 = strlen(src);

    for(i = 0; i<=len2; i++)
    {
        dest[len1+i] = src[i];
    }
    return (dest);
}

int main()
{
    char s1[] = "Hello ";
    char s2[] = "Adriel";
    char *ptr;

    ptr = _strcat(s1, s2);

    printf("%s", ptr);

    return (0);
}
