#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int l;

    if (s == '\0')
        return ;
    l = ft_strlen(s);
    write(fd, s, l);
}