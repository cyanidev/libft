/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:49:16 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/12 18:31:28 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newe;

	newe = malloc(sizeof(t_list));
	if (newe == NULL)
		return (NULL);
	newe->content = content;
	newe->next = NULL;
	return (newe);
}
