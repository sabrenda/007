/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:26:28 by sabrenda          #+#    #+#             */
/*   Updated: 2020/11/05 01:26:32 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     end;
    int		start;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while(1)
    {
        if(ft_strchr(set, s1[start]) != 0 && s1[start] != '\0')
            start++;
        else if (s1[start] == '\0' || ft_strlen(s1) == 0)
           return (ft_strdup(""));
        else
            break;
    }
    end = ft_strlen(s1) - 1;
    while(s1[end])
    {
		if(ft_strchr(set, s1[end]) != 0)
            end--;
        else
            break;
    }
    str = ft_substr(s1, start, (end - start + 1));
    return (str);
}
