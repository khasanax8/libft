/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 12:01:50 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 12:05:06 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	size_t			i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
