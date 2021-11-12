/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:41 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/08 19:33:44 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *st;
	unsigned char ch;
	size_t i;

	st = s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (st[i] == c)
		return (st[i] + ch);
		i++;
	}
	return ("\0");

	/*unsigned char *st;
	unsigned char chr;
	size_t i;
	
	st = s;
	chr = c;
	{
		while (n < i)
		if (st[i] == chr)
		return (st + chr);
		i++;
	}
	return (0);*/

}


int main ()
{
   const char str[] = "holiwis.primer.segundo";
   const char ch = '.';
   char *retorna;

   retorna = ft_memchr(str, ch, strlen(str));

   printf("%s\n", retorna);

   return(0);
}
