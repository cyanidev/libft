/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:02:56 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/25 20:54:04 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	maxlen;

	i = 0;
	while (str[i])
		i++;
	(str = malloc(sizeof(s) * (i + 1)));
	if (!(str))
		return (NULL);

}

