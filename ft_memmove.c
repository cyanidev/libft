/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:50:24 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 19:33:52 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cdest;
	const unsigned char	*csrc;

	csrc = src;
	cdest = dest;
	i = n;
	if (cdest < csrc)
	{
		while (i >= 0 && i <= n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else if (cdest > csrc)
	{
		while (i <= n && i >= 0)
		{
			cdest[i - 1] = csrc[i - 1];
			i--;
		}
	}
	return (dest);
}
