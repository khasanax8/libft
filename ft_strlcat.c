/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:01:21 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 13:09:43 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			srclen;
	size_t			dstlen;

	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = dstlen;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (srclen + dstsize);
	else
	{
		while (src[j] && (dstlen + j) < dstsize)
			dst[i++] = src[j++];
		if ((dstlen + j) == dstsize && dstlen < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (srclen + dstlen);
	}
}
