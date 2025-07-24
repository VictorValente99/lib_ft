/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:04:55 by victde-s          #+#    #+#             */
/*   Updated: 2025/07/23 22:39:49 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int n)
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
// 	printf("A fução strncmp compara duas strings somente até 'n' caracteres\n");
// 	printf("e retorna um valor x\n\n");
// 	printf("if x == 0 as str tem o mesmo tamanho\n");
// 	printf("if x < 0 str2 é maior que str1\n");
// 	printf("if x > 0 str1 é maior que str2\n\n");
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