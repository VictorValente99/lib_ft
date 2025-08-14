/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:00:22 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/14 13:26:27 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
    {
        *ptr = '\0';
        ptr++;
    }
}

/* #include <stdio.h> 
#include <string.h>

int main(void)
{
    char str[] = "abcde";
    char str1[] = "abcde";

    printf("bzero erases the memory at n bytes\n\n");
    printf("before bzero: %s\n", str);
    printf("before ft_bzero: %s\n", str1);
    bzero(str, 3);
    ft_bzero(str1, 3);
    printf("after bzero: %s\n", str);
    printf("after ft_bzero: %s\n", str1);
    return (0);
}  */