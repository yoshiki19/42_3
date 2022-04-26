/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:58:02 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/11 15:56:06 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = ft_strlen(str);
	if (c != 0 && i == 0)
		return (NULL);
	else if (c == 0 && i == 0)
		return (str);
	else
	{
		while (i > 0 && str[i] != (char)c)
			i--;
		if (str[i] == (char)c)
			return (str + i);
		return (NULL);
	}
}

