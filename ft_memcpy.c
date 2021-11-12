/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:03:22 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 19:33:51 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	
	unsigned char		*cdest;
	const unsigned char	*csrc;

	csrc = src;
	cdest = dest;
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}
