/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:36:07 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/11 13:23:05 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//         char str1[128] = {1,1,1,1,1,1,1};
//         char str2[] = "ab\0cde";
//         int i;
        
//         printf("before\n");
//         for (i=0; i<7; i++)
//                 printf("%#x ",str1[i]);
//         printf("\n");
        
//         ft_memcpy(str1, str2, 5);

//         printf("after\n");
//         for (i=0; i<7; i++)
//                 printf("%#x ",str1[i]);
//         printf("\n");

//         return 0;
// }

void				*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t		i;
	unsigned char		*dest;
	unsigned char	*str;

	dest = (unsigned char *)str1;
	str = (unsigned char *)str2;
	if (dest == NULL && str == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		// *((char *)dest + i) = *((char *)str + i);
		*(dest + i) = *(str + i);
		i++;
	}
	return (dest);
}
