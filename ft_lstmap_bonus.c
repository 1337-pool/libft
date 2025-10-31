/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:08:48 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/29 11:37:34 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (NULL);
	res = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (res);
}
void	*f(void *content)
{
	int *new_int = malloc(sizeof(int));
	if (!new_int)
		return (NULL);
	*new_int = (*(int *)content) * 2;
	return (new_int);
}

void	del(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*lst = NULL;
	t_list	*new_list;
	int		*a, *b, *c;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));
	*a = 1;
	*b = 2;
	*c = 3;

	ft_lstadd_back(&lst, ft_lstnew(a));
	ft_lstadd_back(&lst, ft_lstnew(b));
	ft_lstadd_back(&lst, ft_lstnew(c));

	printf("Original list: ");
	print_list(lst);

	new_list = ft_lstmap(lst, f, del);
	printf("Mapped list:   ");
	print_list(new_list);

	ft_lstclear(&lst, del);
	ft_lstclear(&new_list, del);
	return (0);
}
