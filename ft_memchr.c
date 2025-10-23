/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:31:51 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 15:19:26 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	car;

	str = (unsigned char *)s;
	car = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == car)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
