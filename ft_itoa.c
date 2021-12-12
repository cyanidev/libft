/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:54:48 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/02 18:36:28 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long nb)
{
	unsigned int	l;
	int				b;

	if (nb < 0)
		l = 2;
	else
		l = 1;
	b = nb / 10;
	while (b)
	{
		b /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	len = ft_intlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	nbr = n;
	str[len] = '\0';
	while (len-- > 0)
	{
		if (nbr < 0)
			str[len] = -(nbr % 10) + 48;
		else
			str[len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
