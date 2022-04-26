/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur </var/mail/ykitamur>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:04:31 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/12 19:18:14 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ヒープメモリから size バイトのブロックを n個割り当てます。
//確保されたブロックは 0 クリアされます。この関数を使うことにより、プログラムで予め配列などを使ってメモリを確保せずに、
//必要な場所で必要なだけメモリを確保することが出来ます。calloc関数で確保したメモリは、使用後、必ず free関数で解放してください。


#include "libft.h"


// int main(void)
// {
//    size_t *s;
//    size_t i;

//    i = 0;

//    s = (size_t *)ft_calloc(1, 100);

//    while (i < 100)
//    {
//       s[i] = i;
//       printf("%zu", s[i]);
//       i++;
//    }
// }

void  *ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (SIZE_MAX / count < size)
		return(NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
   	ft_bzero(p, count * size);
	return (p);
}
