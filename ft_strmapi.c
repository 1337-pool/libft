/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:09:32 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 14:32:32 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*str;
	char		*mem;
	size_t		i;
	size_t		len;

	str = (char *)s;
	len = ft_strlen(str);
	i = 0;
	mem = (char *)malloc(len + 1);
	if (!mem)
		return (NULL);
	while (i < len)
	{
		mem[i] = f(i, str[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
