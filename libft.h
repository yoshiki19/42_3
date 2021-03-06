/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykitamur <ykitamur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:46:50 by ykitamur          #+#    #+#             */
/*   Updated: 2022/04/28 18:56:22 by ykitamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t  ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char *ft_strnstr(const char *str, const char *target, size_t size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *buf, int ch, size_t n);
int ft_memcmp(const void *buf1, const void *buf2,size_t n);
void *ft_memchr(const void *buf, int ch, size_t n);
void    ft_putchar_fd(char c, int fd);
int     ft_atoi(const char *nptr);
void    ft_bzero(void   *s, size_t	n);
void    *ft_calloc(size_t count, size_t size);
char    **ft_split(char const *s, char c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_strdup(const char *s);
char    **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char const *s, void (*f)(unsigned int, char*));
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
int ft_toupper(int c);
int ft_tolower(int c);




#endif