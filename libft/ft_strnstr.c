/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:43:49 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/09 22:17:01 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			i;
	size_t		count;
	size_t		len2;

	count = 0;
	i = 0;
	len2 = ft_strlen(little);
	if (!little)
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

int main ()
{
	printf("%s", ft_strnstr("aaaaaaabbbaaaa", "", 14));
}
