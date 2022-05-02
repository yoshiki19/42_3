


#include "libft.h"

// int main(void)
// {
//     char const *str = "///abc//def//g/h";
//     char c = '/';
//     char **s;
//     size_t ans;
//     size_t ans2;
//     size_t i = 0;

//     s = ft_split(str, c);
//     ans = ft_range(str, c);
//     ans2 = ft_calc(str, c);
//     printf("%zu\n", ans);
//     printf("%zu\n", ans2);
//     while(s[i] != '\0')
//     {
//         printf("%s\n", s[i]);
//         i++;
//     }
// }


size_t ft_calc(char const *s, char c)
{
    char *s1;
    size_t i;
    size_t count;

    s1 = (char *)s;
    i = 0;
    count = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != c && (s1[i+1] == c || s1[i+1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

size_t ft_range(char const *s, char c)
{
    char *str;
    size_t i;
    size_t count;

    str = (char *)s;
    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] != c)
        {
            count++;
            if (str[i+1] == c || str[i+1] == '\0')
                return(count);
        }
        i++;
    }
    return(count);
}

void    *ft_free(char **mem, size_t j)
{
    while (j > 0)
    {
        free(mem[j]);
        j--;
    }
    free(mem[0]);
    free(mem);
    return (NULL);
}

char    **ft_in(char **mem, char const *s, char c)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (*s != '\0')
    {
        if (s[0] == c)
        {
            while(s[i] == c)
                i++;
        }
        s = s + i;
        if(*s != c && *s != '\0')
        {
            mem[j] = ft_substr(s, 0, ft_range(s, c));
            if (mem[j] == NULL)
                return (ft_free(&mem[j], j));
            j++;
        }
        s = s + ft_range(s, c);
        i = 0;
    }
    mem[j] = NULL;
    return (mem);
}

char **ft_split(char const *s, char c)
{
    char **mem;
    size_t size;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!s)
        return (NULL);
    size = ft_calc(s, c);
    mem = malloc(sizeof(char *) * (size + 1));
    if (!mem)
        return (NULL);
    // while (*s != '\0')
    // {
    //     if (s[0] == c)
    //     {
    //         while(s[i] == c)
    //             i++;
    //     }
    //     s = s + i;
    //     if(*s != c && *s != '\0')
    //     {
    //         mem[j] = ft_substr(s, 0, ft_range(s, c));
    //         if (mem[j] == NULL)
    //         {
    //             free(mem);
    //             return (NULL);
    //         }
    //         j++;
    //     }
    //     s = s + ft_range(s, c);
    //     i = 0;
    // }
    // mem[j] = NULL;
    return (ft_in(mem, s, c));
}
