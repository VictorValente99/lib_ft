/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:31:25 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 01:07:17 by victde-s         ###   ########.fr       */
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
