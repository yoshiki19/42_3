/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:51:15 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/10 16:16:36 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t ft_strlcat(char *dst, const char *src, size_t size);
// size_t ft_strlen(const char *str);

// int    main(void)
// {
// 	char    dest[30] = "abcde";
// 	char    ft_dest[30] = "abcde";
// 	char    *src;

// 	src = "1234567890123456";
// 	printf("  strlcat: %s,%lu\n", dest, strlcat(dest, src,20));
// 	printf("ft_strlcat: %s,%zu\n", ft_dest, ft_strlcat(ft_dest, src, 20));
// }

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (src != '\0' && dstsize == 0)
		return (ft_strlen(src));
	k = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	j = ft_strlen(dst);
	if (dstsize < j + 1)
		return (ft_strlen(src) + dstsize);
	else
	{
		while (j < dstsize - 1 && src[i] != '\0')
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (k);
}

// size_t ft_strlen(const char *str)
// {
// 	size_t count;

// 	count = 0;
// 	while (str[count] != '\0')
// 	{
// 		count++;
// 	}
// 	return (count);
// }
