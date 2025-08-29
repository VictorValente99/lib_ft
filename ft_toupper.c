/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:49:44 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:58:15 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 32);
	}
	return (c);
}
/* #include "libft.h" */
// int	main(void)
// {
// 	printf("\n");
// 	printf("toupper, turn char 'a' at 'A'\n");
// 	printf("or return == char in ascii.\n\n");
// 	printf("-------- Original: %d 'A'\n", toupper('A'));
// 	printf("------------ Mine: %d 'Z'\n", ft_toupper('A'));
// 	printf("-------- Original: %d 'b'\n", toupper('b'));
// 	printf("------------ Mine: %d 'b'\n", ft_toupper('b'));
// 	printf("-------- Original: %d '!'\n", toupper('!'));
// 	printf("------------ Mine: %d '!'\n", ft_toupper('!'));
// 	printf("\n");
// 	return (0);
// }