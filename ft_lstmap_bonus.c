/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:08:48 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/29 10:46:39 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst || !f || !del)
		return ;
	tmp = ft_lstnew(f(lst->content));
	res = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (res);
}
