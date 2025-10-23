/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:57:44 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 15:29:58 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	char			*str1;
	char			*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i] && str2[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
