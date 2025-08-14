/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:03:49 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/14 13:30:38 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = (c + 32);
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("\n");
// 	printf("Tolower, turn char A at a\n");
// 	printf("or return == char in ascii.\n\n");
// 	printf("-------- Original: %d 'A'\n", tolower('A'));
// 	printf("------------ Mine: %d 'Z'\n", ft_tolower('A'));
// 	printf("-------- Original: %d 'b'\n", tolower('b'));
// 	printf("------------ Mine: %d 'b'\n", ft_tolower('b'));
// 		printf("-------- Original: %d '!'\n", tolower('!'));
// 	printf("------------ Mine: %d '!'\n", ft_tolower('!'));
// 	printf("\n");
// 	return (0);
// }