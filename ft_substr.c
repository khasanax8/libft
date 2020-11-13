/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:59:45 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 16:09:11 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*rtz;
	char	*str;
	size_t	s_len;

	rtz = NULL;
	if (!s)
		return (rtz);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char*)ft_calloc(1, sizeof(char)));
	if ((rtz = (char*)malloc(sizeof(char) * (len + 1))))
	{
		str = (char*)s + start;
		ft_strlcpy(rtz, str, len + 1);
	}
	return (rtz);
}
