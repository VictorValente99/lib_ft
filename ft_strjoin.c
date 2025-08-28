/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:15:42 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/27 20:20:39 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new_str;
    size_t nstr_size;
    size_t  s1_len;
    size_t  s2_len;

    if (!s1 || !s2)
        return (NULL);

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    nstr_size = (s1_len + s2_len) + 1;
    new_str = ft_calloc(nstr_size, sizeof(char));
    if (!new_str)
        return (NULL);
    ft_memcpy(new_str, s1, s1_len);
    ft_memcpy(new_str + s1_len, s2, s2_len);
    new_str[s1_len + s2_len] = '\0';
    return (new_str);
}
