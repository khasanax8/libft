/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 09:29:27 by awylis            #+#    #+#             */
/*   Updated: 2020/11/09 09:56:07 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*wiz;

	i = 0;
	wiz = (unsigned char *)b;
	while (i < len)
	{
		wiz[i] = c;
		i++;
	}
	return (b = wiz);
}
