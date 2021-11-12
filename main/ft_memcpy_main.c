/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:03:22 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/07 17:14:32 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main ()
{
  char str1[] = "Geeks"; 
  char str2[] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);
 
  /* Copies contents of str2 to str1 */
  ft_memcpy (str1, str2, sizeof(str2));
 
  puts("\nstr1 after memcpy ");
  puts(str1);
 
  return 0;
}