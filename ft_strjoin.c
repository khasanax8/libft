/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:53:04 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 17:02:33 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len_s1;
	size_t		len_s2;
	size_t		w_len;
	char		*rtz;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen(s2);
	w_len = len_s1 + len_s2 + 1;
	rtz = malloc(sizeof(char) * w_len);
	if (!rtz)
		return (0);
	ft_memmove(rtz, s1, len_s1);
	ft_memmove(rtz + len_s1, s2, len_s2);
	rtz[w_len - 1] = '\0';
	return (rtz);
}
