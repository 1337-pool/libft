/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:57:04 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 14:29:15 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;
	char	*str;

	str = (char *)s;
	i = 0;
	p = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	if (!p)
		return (NULL);
	while (*str)
		p[i++] = *str++;
	p[i] = '\0';
	return (p);
}
