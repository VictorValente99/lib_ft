/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:01:59 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/04 15:37:49 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
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
// 	printf("Isalnum, verify if int or char\n");
// 	printf("0 if false, != '0' if ==.\n\n");
// 	printf("-------- Original: %d\n", isalnum(1));
// 	printf("------------ Mine: %d\n", ft_isalnum(1));
// 	printf("-------- Original: %d\n", isalnum('a'));
// 	printf("------------ Mine: %d\n", ft_isalnum('a'));
// 	printf("-------- Original: %d\n", isalnum('!'));
// 	printf("------------ Mine: %d\n", ft_isalnum('!'));
// 	printf("\n");
// 	return (0);
// }