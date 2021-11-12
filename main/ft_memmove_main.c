/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:50:24 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/07 17:03:11 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	const unsigned char *csrc;
	unsigned char *cdest;

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

int main()
{
    char strDest[100] = "a"; // Array of size 100
    char strSrc[5] = "unogh"; // Array of size 5
 
    puts("strDest antes memmove ");
    puts(strDest);
 
    /* Copies contents of strSrc to strDest */
    ft_memmove(strDest, strSrc, sizeof(strSrc));
	
 
    puts("\nstrDest despues memmove ");
    puts(strDest);
 
    return 0;
}
