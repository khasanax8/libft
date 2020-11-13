/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awylis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:19:59 by awylis            #+#    #+#             */
/*   Updated: 2020/11/13 14:51:21 by awylis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_words(char const *s, char c)
{
	int n;

	n = 0;
	if (*s != c && s)
	{
		n++;
		s++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				n++;
		}
		s++;
	}
	return (n);
}

static int	w_l(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

static void	*free_words(char **words)
{
	size_t	j;

	j = 0;
	while (words[j])
	{
		free(words[j]);
		j++;
	}
	free(words);
	return (NULL);
}

static char	**get_words(char const *s, char c, int n_w)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	if ((res = (char **)malloc(sizeof(char *) * (n_w + 1))))
	{
		while (*s)
		{
			while (*s && *s == c)
				s++;
			if (*s && *s != c)
			{
				if (!(res[i] = (char *)malloc(sizeof(char) * (w_l(s, c) + 1))))
					return (free_words(res));
				while (*s && *s != c)
					res[i][j++] = (char)*s++;
				res[i++][j] = '\0';
				j = 0;
			}
		}
		res[i] = NULL;
	}
	return (res);
}

char		**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = get_words(s, c, n_words(s, c));
	return (words);
}
