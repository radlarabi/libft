/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:55:18 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/13 16:09:33 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned int    i;
    char            *str;

    str = (char *)s;
    i = 0;
    while (str[i] && i < n)
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return (0);
}
