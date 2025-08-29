/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:45:19 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 01:08:15 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	convert;

	i = ft_strlen(s);
	convert = (unsigned char)c;
	while (i > 0)
	{
		i--;
		if (s[i] == convert)
			return ((char *)&s[i]);
	}
	if (convert == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
