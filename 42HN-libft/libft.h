/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mratke <mratke@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:17:40 by mratke            #+#    #+#             */
/*   Updated: 2024/10/10 21:37:32 by mratke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// includes
# include <stdio.h>
# include <stdlib.h>

// Part 1 - Libc functions
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int c);
int		ft_isprint(int ch);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
int		ft_strcmp(const char *lhs, const char *rhs);
void	*ft_memset(void *dest, int ch, size_t count);
int		ft_strncmp(const char *lhs, const char *rhs, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *ptr, int ch, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t count);
int		ft_memcmp(const void *lhs, const void *rhs, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t count);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
