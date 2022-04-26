
#include "libft.h"

// int main(void)
// {
//     printf("%d\n", ft_atoi("-123a4567"));
//     printf("%d\n", ft_atoi("+123a4567"));
//     printf("%d\n", ft_atoi("//123a4567"));
//     printf("%d\n", ft_atoi("++123a4567"));
//     printf("%d\n", ft_atoi("--123a4567"));
//     printf("%d\n", atoi());
//     printf("%d\n", ft_atoi());
// }

int ft_isspace(char n)
{
    if (n == '\t'
    || n == '\n'
    || n == '\v'
    || n == '\f'
    || n == '\r'
    || n == ' ')
        return (1);
    return (0);
}

int ft_atoi(const char *nptr)
{
    int i;
    int flag;
    char *str;
    unsigned long ans;

    str = (char *)nptr;
    i = 0;
    ans = 0;
    flag = 1;
    while (ft_isspace(str[i]))
            i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            flag *= -1;
        i++;
    }
    while (ft_isdigit((str[i])))
    {
        ans = ans * 10 + (str[i] - '0');
        if (ans * 10 + 7> __LONG_MAX__)
            return ((int)__LONG_MAX__);
        i++;
    }
    return (ans * flag);
}