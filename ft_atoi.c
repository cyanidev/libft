/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:07:47 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 19:33:33 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 1;
	sign = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == 32 || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			n = n * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sign = (str[i] - '0') + (sign * 10);
		i++;
	}
	return (sign * n);
}
