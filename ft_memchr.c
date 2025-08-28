/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 12:54:00 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/25 16:46:13 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char value;

    ptr = (unsigned char *)s;
    value = (unsigned char)c;
    while (n--)
    {
        if(*ptr == value)
            return (void *)ptr;
        ptr++;
    }
    return (NULL);
}
int main(void)
{
    char s = 'S';
    char *str = "42SP";
    char ptr = '4';
    int five = 5;
    
    printf("The function memchr, searchs the first & int 'c'");
    printf("\n(converted into char) on the memory box of *s.\n\n");
    printf("Original searching: '%c' | result: %p\n", s, memchr(str, 'S' , sizeof(str)));
    printf("Original searching: '%c' | result: %p\n\n", ptr, memchr(str, '4', sizeof(str)));
    printf("Mine searching: '%c' | result: %p\n", s, ft_memchr(str, 'S', sizeof(str)));
    printf("Mine searching: '%c' | result: %p\n\n", ptr, ft_memchr(str, '4', sizeof(str)));
    printf("Original searching: '%i' | result: %p\n", five, memchr(&five, 5, sizeof(five)));
    printf("Mine searching: '%i' | result: %p\n\n", five, ft_memchr(&five, 5, sizeof(five)));
    printf("Orignal searching: '%c' | result: %p\n", 'x', memchr(str, 'x', sizeof(str)));
    printf("Mine searching: '%c' | result: %p\n\n", 'x', ft_memchr(str, 'x', sizeof(str)));
    return (0);
}