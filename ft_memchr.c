/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:55:18 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/20 11:51:53 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned int    i;
    unsigned char   *str;

    str = (unsigned char *)s;
    i = 0;
    while (str[i] && i < n)
    {
        if (str[i] == (unsigned char)c)
            return (unsigned char *)(&str[i]);
        i++;
    }
    return (0);
}