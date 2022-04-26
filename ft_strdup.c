/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:01:16 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/12 20:17:09 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
// int main(void)
// {
//   char *s;
//   const char str[] = "string";
 
//   s = ft_strdup(str);
//   printf("s = %s\n", s);
// }

char    *ft_strdup(const char *s)
{
	size_t size;
	char *str;

	size = ft_strlen(s);
	// if (size == 0 || s == 0)
	// 	return (NULL);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	ft_memcpy((void *)str, (const void *)s, size + 1);
	return (str);
}
