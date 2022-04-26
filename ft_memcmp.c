/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:23:19 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/12 14:23:39 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//メモリー領域 s1 とs2 の最初の n バイトを比較する
//s1 の最初の n バイトが s2 の最初の n バイトよりも 小さいか、同じか、
//あるいは大きいかによってそれぞれ、負の整数、0、 正の整数を返す。0 でない値の場合、 
//s1 と s2 で値が異なった最初のバイトの値の差で符号は決定される (バイトは unsigned char で解釈される)。
//n が 0 の場合、返り値は 0 となる。

#include "libft.h"



int ft_memcmp(const void *buf1, const void *buf2,size_t n)
{
	unsigned char *buf_1;
	unsigned char *buf_2;
	size_t i;

	i = 0;
	if (n == 0)
		return 0;
	buf_1 = (unsigned char *)buf1;
	buf_2 = (unsigned char *)buf2;
	while (n > i)
	{
		if (buf_1[i] != buf_2[i])
			return (buf_1[i] - buf_2[i]);
		i++;
	}
	return 0;
}
