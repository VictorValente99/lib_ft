/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:04:25 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/04 15:45:03 by victde-s         ###   ########.fr       */
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
// 	printf("Strlen, pass by a str, and return\n");
// 	printf("the N char's on str.\n\n");
// 	printf("-------- Original: %zu\n", strlen("123"));
// 	printf("------------ Mine: %d\n\n", ft_strlen("123"));
// 	return (0);
// }