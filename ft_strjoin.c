/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:47:30 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/20 22:20:33 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	mem = (char *)malloc(sizeof(char)
			* (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!mem)
		return (NULL);
	while (*str1)
		mem[i++] = *(str1++);
	while (*str2)
		mem[i++] = *(str2++);
	mem[i] = '\0';
	return (mem);
}
