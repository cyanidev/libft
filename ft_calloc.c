/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:33:15 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/12 18:07:17 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *	ft_calloc(size_t count, size_t size)
{
	int	*o;

	o = malloc(size * count);
	if (o == '\0')
		return (0);
	ft_bzero(o, count * size);
	return (o);
}
