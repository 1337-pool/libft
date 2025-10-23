/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:00:22 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/20 22:25:46 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *s, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dstsize;
	unsigned int	srcsize;
	char			*src;

	src = (char *)s;
	srcsize = ft_strlen(src);
	dstsize = ft_strlen(dest);
	i = dstsize;
	if (size == 0 || dstsize >= size)
	{
		return (srcsize + size);
	}
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[dstsize + j] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dstsize + srcsize);
}
