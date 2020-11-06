/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: *sabrenda* <*sabrenda*>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 00:21:12 by *sabrend          #+#    #+#             */
/*   Updated: 2020/11/06 00:21:12 by *sabrend         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		words(char const *str, char c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
		{
			i++;
			res++;
		}
	}
	return (res);
}

char	**memory(char **str, char const *s, char c)
{
	int		i;
	int		memory;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		memory = 0;
		while (s[i] != c && s[i])
		{
			i++;
			memory++;
		}
		if (memory != 0)
		{
			if (!(str[words] = (char *)malloc(sizeof(char) * (memory + 1))))
				return (NULL);
			words++;
		}
	}
	str[words] = NULL;
	return (str);
}

void	paste(char **str, char const *s, char c)
{
	int		x;
	int		y;
	int		i;
	int		g;

	i = 0;
	x = 0;
	g = 0;
	while (s[i])
	{
		y = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			str[x][y] = s[i];
			y++;
			i++;
			g = 1;
		}
		if (g == 1)
			str[x][y] = '\0';
		g = 0;
		x++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	word;

	if (!s || !c)
		return (NULL);
	word = words(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	str = memory(str, s, c);
	paste(str, s, c);
	return (str);
}
