/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:56:39 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/11 14:08:49 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t i;
	unsigned char *str;
	
	i = 0;
	str = (unsigned char *)buf;
	while (i < n)
	{
		str[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}
