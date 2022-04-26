/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:17:38 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/13 15:12:02 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
// 	char const *str1 = "abcdefgdhijk";
// 	char *p;

// 	p = ft_substr(str1, 4, 5);
// 	printf("%s", p);
// }

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t size;
	size_t i;
	char *str;
	char *mem;

	size = len;
	str = (char *)s;
	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(str))
		return (ft_strdup(""));
	if (ft_strlen(str) < len)
		size = ft_strlen(str) - start;
	i = 0;
	mem = (char *)malloc(sizeof(char) * (size + 1));
	if (!mem)
		return (NULL);
	while (i < size)
	{
		mem[i] = str[start + i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}


