/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:59:24 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/21 17:12:18 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dst_c;
	char			*src_c;

	src_c = (char *)src;
	dst_c = (char *)dst;
	i = 0;
	if (!src_c && !dst_c)
		return (NULL);
	if (dst_c < src_c)
		ft_memcpy(dst, src, len);
	else
	{
		while (i < len)
		{
			dst_c[len - i - 1] = src_c[len - i - 1];
			i++;
		}
	}
	return (dst);
}
