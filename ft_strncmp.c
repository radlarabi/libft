/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:32:00 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/25 20:52:07 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (c1[i] != '\0' || c2[i] != '\0'))
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
