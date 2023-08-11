#include "main.h"
#include <stdlib.h>


char *string_nconcat(char *s1, char *s2, unsigned int n);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0, j = 0, l1 = 0, l2 = 0;
    char *ptr;
    
    while (s1 && s1[l1])
        l1++;
    while (s2 && s2[l2])
        l2++;
    if (n >= l2)
        ptr = malloc(sizeof(char) * l2 + 1);
    else
        ptr = malloc(sizeof(char) * (l1 + l2 + 1));
    if (!ptr)
        return (NULL);
    while (i < l1)
    {
        ptr[i] = s1[i];
        i++;
    }
    while(n < l2 && i < (l1 + n))
    {
        ptr[i++] = s2[j++];
    }
    ptr[i] = '\0';
    return (ptr);
}