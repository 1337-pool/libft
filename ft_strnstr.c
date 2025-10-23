/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:29:00 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 15:31:59 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;
	char		*to_find;

	str = (char *)s1;
	to_find = (char *)s2;
	if (!*to_find)
		return (str);
	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] && str[i + j] == to_find[j] && i + j < len)
				j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
