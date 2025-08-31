/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victde-s <victde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:02:52 by victde-s          #+#    #+#             */
/*   Updated: 2025/08/31 17:45:02 by victde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int counting_words(const char *str, char stop)
{
	int	word_counter;
	size_t	is_a_word;
	
	word_counter = 0;
	is_a_word = 0;
	while (*str)
	{
		if (*str != stop && !is_a_word)
		{
			is_a_word = 1;
			word_counter++;
		}
		else if (*str == stop)
		is_a_word = 0;
		str++;
	}
	return (word_counter);
}
char **malloc_n_words(int n_words)
{
	char **mallocked_words;
	
	mallocked_words = ft_calloc(n_words + 1 ,sizeof(char *));
	if (!mallocked_words)
		return (NULL);
	return (mallocked_words);
}
size_t get_word_length(char *s, char stop)
{
	size_t len;
	
	len = 0;
	while (s[len] && s[len] != stop)
	{
		len++;
	}
	return(len);
}
char *next_word(char *s, char c)
{
	while (*s && *s == c)
		s++;
	return(s);
}

char **ft_split(char const *s, char c)
{
	char	**words_vector;
	int		n_words;
	char	*s_ptr;
	size_t i;
	size_t	word_size;

	if (!s)
		return (NULL);

	i = 0;
	n_words = counting_words(s, c);
	s_ptr = (char *)s;
	words_vector = malloc_n_words(n_words);
}
