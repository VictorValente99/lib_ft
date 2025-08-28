/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:04:55 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/25 17:02:17 by victde-s         ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Strncmp compare two str until 'n' char's\n");
// 	printf("returns int 'x'\n\n");
// 	printf("if x == 0 str has the same chars until 'n'\n");
// 	printf("if x < 0 str2 < str1\n");
// 	printf("if x > 0 str1 > str2\n\n");
// 	printf("-------- Original: %d\n", strncmp("123", "123", 3));
// 	printf("------------ Mine: %d\n\n", ft_strncmp("123", "123", 3));
// 	printf("-------- Original: %d\n", strncmp("123", "124", 3));
// 	printf("------------ Mine: %d\n\n", ft_strncmp("123", "124", 3));
// 	printf("-------- Original: %d\n", strncmp("125", "124", 3));
// 	printf("------------ Mine: %d\n\n", ft_strncmp("125", "124", 3));
// 	printf("-------- Original: %d\n", strncmp("123", "124", 2));
// 	printf("------------ Mine: %d\n\n", ft_strncmp("123", "124", 2));
// 	return (0);
// }