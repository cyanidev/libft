/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:11:13 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 15:04:56 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

int main()
{
  
    // el char que convierte
    char ch = 'G';
  
    // funcionabilidad
    printf("%c mitolower funcionandis = %c\n", ch, ft_tolower(ch));
  
    return 0;
}