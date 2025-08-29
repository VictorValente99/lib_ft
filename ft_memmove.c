/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:31:25 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:42:37 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	if (ptr > ptr1)
	{
		while (n--)
		ptr[n] = ptr1[n];
	}
	else
	{
		while (n--)
		{
			*ptr = *ptr1;
			ptr++;
			ptr1++;
		}
	}
	return (dest);
}

#include <stdio.h>  

int main(void)
{
    char    ptr[] = "ABC";
    char    ptr1[] = "DE";
    char    ptr2[] = "DE";
    char    ptr3[] = "ABC";
    
    printf("\nThe function memmove moves *src to *dest until 'n', without overlap data.\n\n");
    printf("- Before memmove: %s\n", ptr);
    printf("- Before ft_memmove: %s\n\n", ptr1);
    memmove(ptr, ptr1, ft_strlen(ptr) + 1);
    ft_memmove(ptr2, ptr3, ft_strlen(ptr1) + 1);
    printf("- After memmove: %s\n", ptr);
    printf("- After ft_memmove: %s\n", ptr2);
    return (0);
}