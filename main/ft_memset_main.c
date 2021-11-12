/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:50:20 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/07 16:52:14 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *cs;
	size_t i;

	cs = s;
	i = n;
	while(n > 0)
	{
		cs[i] = c;
		i++;
		n--;	
	}
	return (s);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nantes de memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] con puntitos uwu
    memset(str + 13, '.', 8*sizeof(char));
  
    printf("despues de memset():  %s", str);
    return 0;
}

/*void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}
  
int main()
{
    int n = 10;
    int arr[n];
  
    // Fill whole array with 0.
    ft_memset(arr, 0, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);
  
    return 0;
}*/