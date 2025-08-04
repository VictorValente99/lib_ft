/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:00:43 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/04 15:42:42 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("\n");
// 	printf("Isdigit, verify if == int return '0' if false,\n");
// 	printf("or != '0' if ==\n\n");
// 	printf("-------- Original: %d\n", isdigit('1'));
// 	printf("------------ Mine: %d\n", ft_isdigit('1'));
// 	printf("-------- Original: %d\n", isdigit('a'));
// 	printf("------------ Mine: %d\n", ft_isdigit('a'));
// 	printf("-------- Original: %d\n", isdigit('!'));
// 	printf("------------ Mine: %d\n", ft_isdigit('!'));
// 	printf("\n");
// 	return (0);
// }