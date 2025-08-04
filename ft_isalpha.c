/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:59:11 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/04 15:39:51 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
// 	printf("Isalpha, verify if 'a' && 'z' || 'A' && 'Z'\n");
// 	printf("return '0' if false, or != '0' if ==\n\n");
// 	printf("-------- Original: %d\n", isalpha(1));
// 	printf("------------ Mine: %d\n", ft_isalpha(1));
// 	printf("-------- Original: %d\n", isalpha('a'));
// 	printf("------------ Mine: %d\n", ft_isalpha('a'));
// printf("\n");
// 	return (0);
// }