/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:45 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 19:33:10 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	size_t				i;

	cs1 = s1;
	cs2 = s2;
	i = 0;
	while ((cs1[i] != '\0' && cs2[i] != '\0') && i < n)
	{
		if (cs1[i] != cs2[i])
		{
			return (cs1[i] - cs2[i]);
			i++;
		}
		else if (cs1[i] == cs2[i])
			return (0);
	}
	return (cs1[i] - cs2[i]);
}
