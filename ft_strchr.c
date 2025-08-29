/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:05:35 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:45:34 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	convert;

	i = 0;
	convert = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == convert)
			return ((char *)&s[i]);
		i++;
	}
	if (convert == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int main(void)
// {
//     char *str = "42";
//     char *str1 = "searching null";
//     char *str2 = "ab";
//     printf("The function strchr, founds the first & int 'c'\n");
//     printf("(converted into char) on *s\n");
//     printf("\nOriginal: %p\n", (void *)strchr(str, '4'));
//     printf("Mine: %p\n", (void *)ft_strchr(str, '4'));
//     printf("Original: %p\n", (void *)strchr(str1, '\0'));
//     printf("Mine: %p\n", (void *)strchr(str1, '\0'));
//     printf("Original: %p\n", (void *)strchr(str2, 'a'));
//     printf("Mine: %p\n", (void *)ft_strchr(str2, 'a'));
//     printf("Original: %p\n", (void *)strchr(str2, 'x'));
//     printf("Mine: %p\n", (void *)ft_strchr(str2, 'x'));
//     return (0);
// }