/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:32:14 by awylis            #+#    #+#             */
/*   Updated: 2020/11/13 10:05:49 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dst2;
	const char		*src2;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dst2 = (char *)dst;
	src2 = (const char *)src;
	while (n--)
		dst2[n] = src2[n];
	return (dst);
}
