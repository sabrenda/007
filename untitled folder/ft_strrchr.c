/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 22:54:04 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/01 16:25:48 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (i == 0)
		return (NULL);
	if (c == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
