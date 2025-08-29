/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:04:55 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 01:08:05 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, char *str2, size_t n)
{
	int	i;

	i = 0;
	while ((str1[i]) && (str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((str1[i]) - (str2[i]));
		}
		i++;
	}
	return (0);
}
