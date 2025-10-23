/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:23:19 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/21 14:27:02 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cinstr(char *s, char c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_lenres(char *s1, char *set, int *index, int *len)
{
	int	i;
	int	slen;

	slen = ft_strlen(s1) - 1;
	i = 0;
	while (i <= slen)
	{
		if (!ft_cinstr(set, s1[i]))
		{
			*index = i;
			break ;
		}
		i++;
	}
	while (slen >= i)
	{
		if (!ft_cinstr(set, s1[slen]))
		{
			*len = slen - *index + 1;
			break ;
		}
		slen--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		len;
	char	*str;
	char	*setp;
	char	*mem;

	str = (char *)s1;
	setp = (char *)set;
	if (!str)
	{
		mem = (char *)malloc(1);
		mem[0] = '\0';
		return (mem);
	}
	ft_lenres(str, setp, &index, &len);
	return ((char *)ft_substr(str, index, len));
}
