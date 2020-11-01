/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:18:59 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/01 20:15:09 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	len = ft_strlen(dst) + ft_strlen(src);
	i = 0;
//	while (*dst)
//		dst++;
	while (dst[i])
		i++;
	if (size < (size_t)ft_strlen(dst))
		return (len);
//	i = 0;

	while (size-- && size - i && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if(size != 0)
		dst[i] = '\0';
	return (len);
}
