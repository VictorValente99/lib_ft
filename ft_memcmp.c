/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 16:47:20 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/29 00:39:19 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr != *ptr1)
			return (*ptr - *ptr1);
	ptr++;
	ptr1++;
	}
	return (0);
}
int main(void)
{
    char str[] = "42";
    char str1[] = "40";

    char str2[] = "42";
    char str3[] = "42";

    int a = 42;
    int b = 40;

    printf("The function memcmp, compare *s1 && *s2 untril 'n' bytes,\n");
    printf("returns int x\n\n");
    printf("if x == 0 (*s1 && *s2) ==\n");
    printf("if x < 0 *s1 < *s2\n");
    printf("if x > 0 *s1 > *s2\n");
    printf("s1= %s | s2= %s\n", str, str1);
    printf("Original: %i | Mine: %i\n\n", memcmp(str, str1, sizeof(str)), ft_memcmp(str, str1, sizeof(str)));
    printf("s1= %s | s2= %s\n", str2, str3);
    printf("Original: %i | Mine: %i\n\n", memcmp(str2, str3, sizeof(str2)), ft_memcmp(str2, str3, sizeof(str2)));
    printf("s1 (int) = %i | s2(int) = %i\n", a, b);
    printf("Original: %i | Mine: %i\n", memcmp(&a, &b, sizeof(a)), ft_memcmp(&a, &b, sizeof(a)));
}