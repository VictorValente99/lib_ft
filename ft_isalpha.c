/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:59:11 by victde-s          #+#    #+#             */
/*   Updated: 2025/07/23 20:45:02 by victde-s         ###   ########.fr       */
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
// 	printf("A função isalpha, verifica se é contido de 'a' a 'z' ou de 'A' até 'Z'\n");
// 	printf("e retorna 0 se for falso, ou qualquer número != '0' se for verdadeiro.\n\n");
// 	printf("-------- Original: %d\n", isalpha(1));
// 	printf("------------ Mine: %d\n", ft_isalpha(1));
// 	printf("-------- Original: %d\n", isalpha('a'));
// 	printf("------------ Mine: %d\n", ft_isalpha('a'));
// printf("\n");
// 	return (0);
// }