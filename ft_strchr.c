/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:52 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/02 17:07:35 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (const char)c)
			return (&str[i]);
		i++;
	}
	if (str[i] == (const char)c)
		return (&str[i]);
	return (NULL);
}
