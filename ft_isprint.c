/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:03:19 by victde-s          #+#    #+#             */
/*   Updated: 2025/07/23 21:46:12 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c <= 32 || c >= 126)
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("\n");
// 	printf("A função isprint, verifica se é alguma coisa printável\n");
// 	printf("retorna 0 para falso ou != 0 para verdadeiro.\n\n");
// 	printf("-------- Original: %d\n", isprint(7));
// 	printf("------------ Mine: %d\n", ft_isprint(7));
// 	printf("-------- Original: %d\n", isprint('a'));
// 	printf("------------ Mine: %d\n", ft_isprint('a'));
// 	printf("-------- Original: %d\n", isprint('!'));
// 	printf("------------ Mine: %d\n", ft_isprint('!'));
// 	printf("\n");
// 	return (0);
// }