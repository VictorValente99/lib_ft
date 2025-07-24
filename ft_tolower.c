/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:03:49 by victde-s          #+#    #+#             */
/*   Updated: 2025/07/23 21:43:50 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// 	printf("A função tolower, transforma caracteres maiuscúlos em minúsculos\n");
// 	printf("ou retorna o próprio char em ascii.\n\n");
// 	printf("-------- Original: %d 'A'\n", tolower('A'));
// 	printf("------------ Mine: %d 'Z'\n", ft_tolower('A'));
// 	printf("-------- Original: %d 'b'\n", tolower('b'));
// 	printf("------------ Mine: %d 'b'\n", ft_tolower('b'));
// 		printf("-------- Original: %d '!'\n", tolower('!'));
// 	printf("------------ Mine: %d '!'\n", ft_tolower('!'));
// 	printf("\n");
// 	return (0);
// }