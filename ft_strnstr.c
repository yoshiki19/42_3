/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:22:56 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/25 10:12:04 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
// 	const char *largestring = "1234567889";
// 	const char *smallstring = "45";
// 	char	*ptr;

// 	ptr = strnstr(largestring, smallstring, 4);
// 	printf("%s", ptr);
// }


char *ft_strnstr(const char *str, const char *target, size_t size)
{
	size_t str_len;
	size_t target_len;
	size_t i;

	if (target[0] == '\0')
		return ((char *)str);
	if (size == 0)
		return (NULL);
	str_len = ft_strlen(str);
	target_len = ft_strlen(target);
	if (str_len < size)
		size = str_len;
	if (size < target_len)
		return (NULL);
	i = 0;
	while (i + target_len <= size)
	{
		if (ft_strncmp(str + i, target, target_len) == 0)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
// }
