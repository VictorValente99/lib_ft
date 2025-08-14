/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:02:47 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/14 13:29:28 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("\n");
// 	printf("Isascii, verify if > ascii < \n");
// 	printf("'0' if false, or != '0' if ==\n\n");
// 	printf("-------- Original: %d\n", isascii(1));
// 	printf("------------ Mine: %d\n", ft_isascii(1));
// 	printf("-------- Original: %d\n", isascii('a'));
// 	printf("------------ Mine: %d\n", ft_isascii('a'));
// 	printf("-------- Original: %d\n", isascii(128));
// 	printf("------------ Mine: %d\n", ft_isascii(128));
// 	printf("\n");
// 	return (0);
// }