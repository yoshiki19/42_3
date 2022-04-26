
#include "libft.h"

// void ft_putnbr_fd(int n, int fd);

// int main(void)
// {
//     ft_putnbr_fd(1234567, 8);
// 
void ft_putnbr_fd(int n, int fd)
{
    if (n > -2147483648 && n < 0)
    {
        n *= -1;
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(n, fd);
    }
    else if (n == -2147483648)
    {
        write(fd, "-2147483648", 12);
    }
    else if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else if (n >= 0 && n <= 9)
    {
        ft_putchar_fd(n + '0', fd);
    }
}
