/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:36:03 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/20 22:27:34 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (*(str++) != '\0')
		i++;
	return (i);
}
