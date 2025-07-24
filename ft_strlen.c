/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:04:25 by victde-s          #+#    #+#             */
/*   Updated: 2025/07/23 22:20:30 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("A função strlen, percorre uma string, e retorna\n");
// 	printf("a quantidade de char's que tem na str\n\n");
// 	printf("-------- Original: %zu\n", strlen("123"));
// 	printf("------------ Mine: %d\n\n", ft_strlen("123"));
// 	return (0);
// }