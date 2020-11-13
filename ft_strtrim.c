/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:07:16 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 17:12:21 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*rtz;
	size_t	len;
	size_t	ind;

	rtz = NULL;
	len = 0;
	ind = 0;
	if (!s1)
		return (rtz);
	while (s1[ind] && ft_strchr(set, s1[ind]))
		ind++;
	len = ft_strlen(s1);
	while (len && len > ind && ft_strchr(set, s1[len - 1]))
		len--;
	rtz = ft_substr((char*)s1 + ind, 0, len - ind);
	return (rtz);
}
