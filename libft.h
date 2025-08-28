/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:39:08 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/18 18:02:55 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>


//SEÇÃO DE CHAR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);

//SEÇÃO DE STRINGS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

size_t	ft_strlen(const char *c);

/* int	ft_strchr();

int	ft_strrchr(); */

int	ft_strncmp(const char *str1, const char *str2, size_t n);

/* int	ft_strlcpy();

int	ft_strlcat();

int	ft_strdup();

int	ft_strnstr();

int	ft_strjoin();

int	ft_strtrim();

int	ft_split();

int	ft_substr();

int	ft_strmapi();

int	ft_striteri(); */

//SEÇÃO DE MEMÓRIA!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void	*ft_memset(void *s, int c, size_t n);

/* int	ft_memcpy(); */

void	*ft_memmove(void *dest, const void *src, size_t n);
/* 
int	ft_memchr();

int	ft_memcmp();

int	ft_calloc();

int	ft_bzero(void *s, size_t n);

int	ft_atoi();

int	ft_itoa(); */

//SEÇÃO DE SAÍDA!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

/* int	ft_putchar_fd();

int	ft_putstr_fd();

int	ft_putendl_fd();

int	ft_putnbr_fd();
 */
#endif