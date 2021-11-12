/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:15:55 by afelicia          #+#    #+#             */
/*   Updated: 2021/11/05 21:16:03 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{

    char s1[] = "bai";
    char s2[] = "baz";
    
    int a = ft_strncmp(s1, s2, 2);
    printf("%d\n", a);
}
