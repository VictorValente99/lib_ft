/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 22:40:01 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:56:41 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	useful_start;
	size_t	useful_end;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	useful_start = 0;
	useful_end = ft_strlen(s1) - 1;
	while (s1[useful_start] && ft_strchr(set, s1[useful_start]))
		useful_start++;
	while (useful_end > useful_start && ft_strchr(set, s1[useful_end]))
		useful_end--;
	new_str = ft_calloc((useful_end - useful_start) + 2, sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1 + useful_start, (useful_end - useful_start) + 2);
	return (new_str);
}
