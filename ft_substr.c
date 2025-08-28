/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:59:55 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/27 19:11:56 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new_str;
    size_t true_len;
    size_t final_len;

    if (!s)
        return (NULL);

    if (start > ft_strlen(s))
        return ft_strdup("");
    if (ft_strlen(s + start) < len)
        len = ft_strelen(s + start);
    new_str = (char *)ft_calloc((len + 1), sizeof(char));
    if (!new_str)
        return (NULL);
    ft_strlcyp(new_str, s + start, len + 1);
    return(new_str);

}