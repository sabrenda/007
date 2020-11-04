/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 02:56:50 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/04 03:19:02 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoinn(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if(!(str = (char *)malloc(sizeof(s1) * (len + 1))))
		return 	(NULL);



}
