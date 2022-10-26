/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:03:47 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/21 17:12:07 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*a;
	char			*b;
	unsigned int	i;

	i = 0;
	a = (char *)dst;
	b = (char *)src;
	if (!a && !b)
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
