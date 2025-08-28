/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:45:19 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/21 17:44:36 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    unsigned char convert;
    
    i = ft_strlen(s);
    convert  = (unsigned char)c;

    while (i > 0)
    {
        i--;
        if(s[i] == convert)
            return (char *)&s[i];
    }
    if(convert == '\0')
        return (char *)&s[i];
    return (NULL);
}

int main(void)
{
    char *str = "AFFF";
    char *str1 = "procurando nulo";
    char *str2 = "sem o caractere";
    printf("The function strrchr, founds the last & int 'c'\n");
    printf("(converted into char) on *s\n");
    printf("\nFirst &: %p\n", (void *)ft_strchr(str, 'F'));
    printf("\nLast &: (original): %p\n", (void *)strrchr(str, 'F'));
    printf("Last &: (mine): %p\n", (void *)ft_strrchr(str, 'F'));
    printf("Original: %p\n", (void *)strrchr(str1, '\0'));
    printf("Mine: %p\n", (void *)ft_strrchr(str1, '\0'));
    printf("Original: %p\n", (void *)strrchr(str2, '!'));
    printf("Mine: %p\n", (void *)ft_strrchr(str2, '!'));
    return (0);
}