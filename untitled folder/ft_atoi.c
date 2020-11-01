/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:13:37 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/01 19:30:56 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		znak;
	int		res;

	i = 0;
	res = 0;
	znak = 1;
	while (str[i] >= 9 && str[i] <= 13 && str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			znak = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	return (res * znak);
}
