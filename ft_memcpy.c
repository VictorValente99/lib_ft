/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:33:09 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/14 13:29:55 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr;
    unsigned char *ptr1;

    ptr = (unsigned char *)dest;
    ptr1 = (unsigned char *)src;
    while (n--)
    {
        *ptr = *ptr1;
        ptr++;
        ptr1++;
    }
    return (dest);
}
