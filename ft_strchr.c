/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:10:52 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/12 21:02:52 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*strchr(const char *s, int c)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	while (str[i] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (str[i] + c);
	}
}

int main (void)
{
	const char str[] = "hola.dos.tres";
	const char ch = '.';
	char *ret;

	ret = strchr(str, ch);

	printf ("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
