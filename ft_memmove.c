/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:59:38 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/11 10:00:10 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//         char str[] = "abcdefghijklmnopqrstu";
        
//         printf("before：%s\n",str);
        
//         memmove(str+5, str, 10);

//         printf("after：%s\n",str);

//         return 0;
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	i = 0;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}
