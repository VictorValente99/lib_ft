/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:03:28 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/26 11:39:49 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (*needle == '\0')
        return (char *)haystack;
    while (i < len && haystack[i])
    {
        while (i + j < len && needle[j] && haystack[i + j] == needle[j])
            j++;
        if (needle[j] == '\0')
            return (char *)&haystack[i];
        i++;
    }
    return (NULL);
}
