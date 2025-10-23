/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:22:10 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/22 15:18:10 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*mem;
	size_t		i;
	size_t		lens;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return ((char *)ft_calloc(1, 1));
	lens = ft_strlen(s + start);
	if (len > lens)
		len = lens;
	mem = malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	while (*s && i < len)
	{
		mem[i] = s[start + i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
