#include "libft.h"


void ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
    size_t i;
    char *st;

    if (!s || !f)
        return ;
    st = (char *)s;
    i = 0;
    while (st[i] != 0)
    {
        f(i, st + i);
        i++;
    }
}


// void *ft_striteri(char const *s, char (*f)(unsigned int, char*))
// {
//     char *mem;
//     char *str;
//     unsigned int i;

//     i = 0;
//     str = (char *)s;
//     mem = (char*)malloc(sizeof(void) * ft_strlen(s));
//     if (mem == '\0')
//         return (NULL);
//     while (*str != '\0')
//     {
//         f(i, str);
//         mem[i] = *str;
//         i++;
//         str++;
//     }
//     mem[i] = '\0';
//     return (mem);
// }