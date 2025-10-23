/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjaber <mjaber@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:29:48 by mjaber            #+#    #+#             */
/*   Updated: 2025/10/20 21:43:04 by mjaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(int nb)
{
	int		i;
	long	n;

	n = nb;
	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int nb)
{
	char	*mem;
	long	n;
	long	i;

	n = nb;
	i = ft_digit_count(n);
	mem = (char *)malloc((1 + ft_digit_count(n)) * sizeof(char));
	if (!mem)
		return (NULL);
	mem[i] = '\0';
	i--;
	if (n < 0)
	{
		mem[0] = '-';
		n = -n;
	}
	while ((i >= 1 && nb < 0) || (i >= 0 && nb >= 0))
	{
		mem[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (n < 0)
		mem[i] = '-';
	return (mem);
}
