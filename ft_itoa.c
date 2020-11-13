/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 15:56:09 by awylis            #+#    #+#             */
/*   Updated: 2020/11/13 10:10:33 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_mlturn(long n)
{
	size_t	mlturn;
	int		nbk;

	mlturn = 0;
	nbk = 0;
	if (n < 0)
	{
		mlturn++;
		nbk++;
		n = -n;
	}
	while (n >= 1)
	{
		mlturn++;
		n /= 10;
	}
	return (mlturn);
}

static char			*ft_qx(char *rtx, long nbr, int len, int nbk)
{
	if (nbr != 0)
		rtx = malloc(sizeof(char) * (len + 1));
	else
		return (rtx = ft_strdup("0"));
	if (!rtx)
		return (0);
	nbk = 0;
	if (nbr < 0)
	{
		nbk++;
		nbr = -nbr;
	}
	rtx[len] = '\0';
	while (--len)
	{
		rtx[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (nbk == 1)
		rtx[0] = '-';
	else
		rtx[0] = (nbr % 10) + '0';
	return (rtx);
}

char				*ft_itoa(int n)
{
	int			len;
	char		*rtx;
	long		nbr;
	int			nbk;

	nbr = n;
	len = ft_mlturn(nbr);
	rtx = 0;
	nbk = 0;
	if (!(rtx = ft_qx(rtx, nbr, len, nbk)))
		return (0);
	return (rtx);
}
