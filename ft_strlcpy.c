/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:25:05 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:51:24 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[len] && len < dstsize - 1)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>

int main(void)
{
    char source[] = "ab";
    char destiny[sizeof(source)];
    size_t destinysize = sizeof(source);
    char source1[] = "ab";
    char destiny1[sizeof(source1)];
    size_t destinysize1 = sizeof(source1);
    printf("\nThe strlcpy function copy/catenate a string\n");
    printf("src to dst, ensuring it is null terminated, to prevent buffer overflow\n\n");
    printf("Before strlcpy: %s | %zu\n", destiny, destinysize);
    printf("Before ft_strlcpy: %s | %zu\n\n", destiny1, destinysize1);
    strlcpy(destiny, source, destinysize);
    ft_strlcpy(destiny1, source1, destinysize1);
    printf("After strlcpy: %s | %zu\n", destiny, destinysize);
    printf("After ft_strlcpy: %s | %zu\n\n", destiny1, destinysize1);
    return(0);
}