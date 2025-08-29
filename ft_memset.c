/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:02:34 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:43:23 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}

/* int main (void)
{
    char    ptr[] = "ABCDE";
    char    ptr1[] = "ABCDE";
    
    printf("Memset set 'c' until 'n' bytes, at '*s'\n");
    printf("Before memset: %s\n", ptr);
    printf("Before ft_memset: %s\n", ptr1);
    memset(ptr, 0, 5);
    ft_memset(ptr1, 0, 5);
    printf("After memset: %s\n", ptr);
    printf("After ft_memset: %s\n", ptr1);
    return (0);
}    */