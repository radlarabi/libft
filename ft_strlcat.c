/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:52:56 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/24 17:54:39 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	lens;
	unsigned int	lend;
	unsigned int	i;

	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	i = 0;
	if (dstsize == 0 || dstsize <= lend)
		return (dstsize + lens);
	while (src[i] && i < dstsize - lend - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lens + lend);
}
