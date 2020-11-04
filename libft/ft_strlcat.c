/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:18:59 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/03 23:16:17 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		sizedst;
	size_t		sizesrc;

	if (!dst || !src)
		return (0);
	i = 0;
	sizedst = (size_t)ft_strlen(dst);
	sizesrc = (size_t)ft_strlen(src);
	while (*dst)
		dst++;
	if (size <= sizedst)
		return (size + sizesrc);
	while ((i < size - sizedst - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (sizedst + sizesrc);
}
