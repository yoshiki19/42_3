/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:56:19 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/12 14:12:50 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *ft_memchr(const void *buf, int ch, size_t n);

// int main(void)
// {
// 	char *str = "abcdef/ghij";
// 	unsigned char *p;

// 	p = ft_memchr(str, '/', 7);
// 	printf("%s", p);
// }

void *ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char *buf1;
	size_t i;

	i = 0;
	buf1 = (unsigned char *)buf;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (buf1[i] == (unsigned char)ch)
			return (buf1+i);
		i++;
	}
	return (NULL);
}
