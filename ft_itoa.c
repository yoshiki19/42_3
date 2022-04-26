#include "libft.h"

// size_t ft_ilen(int n);

// int main(void)
// {
//     int a;

//     printf("%zu", ft_ilen(1234567));
// }

size_t ft_ilen(int n)
{
    size_t count;
    size_t N;
    
    N = (size_t)n;
    count = 0;
    if (n == 0)
        return (1);
    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    char *mem;
    long int i;
    long int nt;

    nt = (long int)n;
    i = ft_ilen(nt);
    if (nt < 0)
        i += 1;
    mem = malloc(sizeof(char) * (i+1));
    if (!mem)
        return (NULL);
    if (nt == 0)
        mem[0] = '0';
    mem[i] = '\0';
    if (nt < 0)
    {
        mem[0] = '-';
        nt *= -1;
    }
    while (nt > 0)
    {
        mem[i - 1] = (nt % 10) + '0';
        nt = nt / 10;
        i--;
    }
    return (mem);
}