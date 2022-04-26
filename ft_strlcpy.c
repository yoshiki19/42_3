/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:35:12 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/10 16:35:14 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     char *dst1 = "abcdefghijk";
//     char *str1 = "123456789";
//     size_t p;

//     p = ft_strlcpy(dst1, str1, 5);
//     printf("%zu", p);
// }

size_t ft_strlcpy(char *dst, const char *src, size_t maxlen)
{
    size_t srclen;

    srclen = ft_strlen(src);
    if (srclen + 1 < maxlen)
        ft_memcpy(dst, src, srclen + 1);
    else if (maxlen != 0)
    {
        ft_memcpy(dst, src, maxlen - 1);
        dst[maxlen-1] = '\0';
    }
    return srclen;
}