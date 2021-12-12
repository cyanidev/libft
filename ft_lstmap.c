/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelicia <afelicia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:49:13 by afelicia          #+#    #+#             */
/*   Updated: 2021/12/12 20:07:48 by afelicia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newe;
	t_list	*newlst;

	newlst = 0;
	while (lst)
	{
		newe = ft_lstnew(f(lst->content));
		if(newe == NULL)
		{	
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back (&newlst, newe);
		lst = lst->next;
	}
	
	return (newlst);
}