/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:59 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/25 19:55:39 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	a = 0;
	while ((us1[a] != '\0' && us2[a] != '\0') && a < n)
	{
		if (us1[a] != us2[a])
			return (us1[a] - us2[a]);
		a++;
	}
	if (a == n)
		return (0);
	return (us1[a] - us2[a]);
}
