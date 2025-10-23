/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:36:01 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/23 11:57:28 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cp;

	cp = lst;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	while (cp->next)
		cp = cp->next;
	cp->next = new;
}
