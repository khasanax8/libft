/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:16:58 by awylis            #+#    #+#             */
/*   Updated: 2020/11/13 12:11:06 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (destination == source)
		return (dst);
	else if (destination > source)
	{
		source = (unsigned char *)source + len - 1;
		destination = dst + len - 1;
		while (len--)
			*destination-- = *source--;
	}
	else if (destination < source)
	{
		while (len--)
			*destination++ = *source++;
	}
	return (dst);
}
