/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:56:25 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/12 13:44:14 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
    size_t i;

	if (n == 0)
		return 0;
    i = 0;
    str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > i)
	{
		if (str1[i] != str2[i])
			return str1[i] - str2[i];
		if (str1[i] == '\0')
			return 0;
        i++;
	}
	return 0;
}




