/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:43:49 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/02 15:33:20 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			i;
	int			count;
	size_t		len2;

	count = 0;
	i = 0;
	len2 = (size_t)ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	count = ft_strlen(little);
	while (big[i] && len-- >= len2)
	{
		if (ft_strncmp(big + i, little, count) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
