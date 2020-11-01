/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:02:19 by sabrenda          #+#    #+#             */
/*   Updated: 2020/10/31 20:00:25 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_

# include <stdio.h>
# include <stdlib.h>

void    *ft_memset(void *dest, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *source, size_t count);
void    *ft_memccpy(void *dest, const void *src, int ch, size_t count);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *arr, int c, size_t n);
int     ft_memcmp(const void *buf1, const void *buf2, size_t count);
int     ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *string1, const char *string2, size_t num);
char 	*ft_strnstr(const char *big ,const char *little ,size_t len);
int     ft_strncmp(const char *string1, const char *string2, size_t num);
int     ft_atoi(const char *str);
int     ft_isalpha(int ch);
int     ft_isdigit(int ch);
int     ft_isalnum(int ch);
int     ft_isascii(int ch);
int     ft_isprint(int ch);
int     ft_toupper(int ch);
int     ft_tolower(int ch);
void    *ft_calloc(size_t num, size_t size);
char    *ft_strdup(const char *str);

#endif
