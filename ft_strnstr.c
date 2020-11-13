/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:29:57 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 13:36:47 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	nlen;
	char	*hsk;

	i = 0;
	hsk = (char *)haystack;
	nlen = ft_strlen(needle);
	if (nlen == 0 || haystack == needle)
		return (hsk);
	while (hsk[i] != '\0' && i < len)
	{
		c = 0;
		while (hsk[i + c] != '\0' && needle[c] != '\0'
				&& hsk[i + c] == needle[c] && i + c < len)
			c++;
		if (c == nlen)
			return (hsk + i);
		i++;
	}
	return (0);
}
