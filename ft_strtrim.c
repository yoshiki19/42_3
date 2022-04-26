/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:53:28 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/13 16:36:19 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char *str;
// 	char *set1;
// 	size_t size;
// 	size_t mem;
// 	size_t i;


// 	str = (char *)s1;
// 	set1 = (char *)set;
// 	size = ft_strlen(str) + ft_strlen(set1);
// 	mem = (char *)calloc(size, sizeof(char));
// 	i = 0;
// 	while (size > i)
// 	{
// 		if (str[i] != set1)
// 			mem[i] = str[i];
// 		i++;
// 	}
// 	return (mem);
// }

#include "libft.h"

// int main(void)
// {
// 	char const *s1 = "abcd42efg42244lfaj4";
// 	char const *set = "42";

// 	ft_strtrim(s1, set);
// 	printf("%s", s1);
// }


char *ft_strtrim(char const *s1, char const *set)
{
	size_t len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 &&  ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	return(ft_substr(s1, 0, len));
}

