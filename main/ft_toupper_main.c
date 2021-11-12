/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:03:44 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 15:08:41 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

int main()
{
  
    // el char que convierte
    char ch = 'g';
  
    // funcionabilidad
    printf("%c mitoupper funcionandis = %c\n", ch, ft_toupper(ch));
  
    return 0;
}