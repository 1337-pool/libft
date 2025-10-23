/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:15:17 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/20 21:57:42 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	while (n > 0)
	{
		*(p1++) = *(p2++);
		n--;
	}
	return (dst);
}
