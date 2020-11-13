/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:42:31 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 11:04:01 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char				c2;
	unsigned char				*dst2;
	const unsigned char			*src2;
	size_t						i;

	c2 = (unsigned char)c;
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == c2)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
