/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:43:01 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 16:21:54 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p1;
	unsigned char		*p2;

	if (!dst && !src)
		return (dst);
	p1 = (unsigned char *) dst;
	p2 = (unsigned char *) src;
	if (p1 >= p2)
		while (len-- > 0)
			p1[len] = p2[len];
	else
		ft_memcpy(p1, p2, len);
	return (dst);
}
