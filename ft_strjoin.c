/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:58:18 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/13 13:51:59 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;
	char *mem;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	str1 = (char *)s1;
	str2 = (char *)s2;
	mem = (char *)malloc((ft_strlen(str1)+ft_strlen(str2)) * sizeof(char));
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, str1, ft_strlen(str1) + 1);
	ft_strlcat(mem, str2, ft_strlen(str1) + ft_strlen(str2) + 1);
	return (mem);
}

