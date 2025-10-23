/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:01:10 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/22 15:13:57 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countword(char *s, char c)
{
	int	done;
	int	count;

	done = 1;
	count = 0;
	while (*s)
	{
		if (*s != c && done)
		{
			done = 0;
			count++;
		}
		else if (*s == c)
			done = 1;
		s++;
	}
	return (count);
}

char	*ft_getword(char *s, char c, int *index)
{
	int		start;
	int		end;
	char	*str;

	start = *index;
	end = start;
	while (s[start] == c && s[start] != '\0')
		start++;
	end = start;
	while (s[end] != c && s[end] != '\0')
		end++;
	*index = end;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s[start], end - start + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*str;
	int		ctwr;
	int		index;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	index = 0;
	str = (char *)s;
	ctwr = ft_countword(str, c);
	strs = (char **)malloc(sizeof(char *) * (ctwr + 1));
	while (i < ctwr)
	{
		strs[i] = ft_getword(str, c, &index);
		index++;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
