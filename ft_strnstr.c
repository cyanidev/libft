/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:09:43 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/24 20:19:22 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	to_find_len;

	i = 0;
	j = 0;
	to_find_len = ft_strlen((char *)to_find);
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] && len-- >= to_find_len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
