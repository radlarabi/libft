/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:26:19 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/19 12:28:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_numbers(long l)
{
	int	count;

	count = 0;
	if (l <= 0)
		count++;
	while (l)
	{
		l /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ret;
	long	l;
	int		i;
	int		len;

	l = (long)n;
	i = 0;
	len = count_numbers(l);
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (!ret)
		return (0);
	ret[len] = '\0';
	if (l == 0)
		ret[0] = 48;
	if (l < 0)
	{
		ret[i] = '-';
		l *= -1;
	}
	i++;
	while (l > 0)
	{
		ret[len - i] = (l % 10) + 48;
		l /= 10;
		i++;
	}
	return (ret);
}

int	main(void)
{
	// int	a = 1234;
	puts(ft_itoa(-159));
	return (0);
}