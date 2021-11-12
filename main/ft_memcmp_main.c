/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:45 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/07 18:50:28 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	size_t	i;

	cs1 = s1;
	cs2 = s2;
	i = 0;
	while ((cs1[i] != '\0' && cs2[i] != '\0') && i < n)
	{
		if (cs1[i] != cs2[i])
		{
			return (cs1[i] - cs2[i]);
			i++;
		}
		else if (cs1[i] == cs2[i])
		return (0);
	}
	return (cs1[i] - cs2[i]);
}

int main () 
{
	int retu;
	char str1[15];
	char str2[15];
	int ret;

   memcpy(str1, "pa", 2);
   memcpy(str2, "PA", 2);

   retu = ft_memcmp(str1, str2, 5);

   if(retu > 0) {
      printf("str2 is less than str1");
   } else if(retu < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}