/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:28:24 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/23 17:42:09 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	flag;
	int	i;

	count = 0;
	flag = 0;
	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * ((end - start) + 1));
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}
/*
void	ft_free(char **s, int i)
{
	while (--i >0)
		free(s[i]);
	free(s);
	return (NULL);
} 
*/
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**result;

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (s == NULL || result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			result[j++] = word_dup(s, start, i);
			start = -1;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
