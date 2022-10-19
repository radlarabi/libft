/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:52:55 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/15 14:17:30 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int    i;
    char            *c1;
    char            *c2;

    c1 = (char *)s1;
    c2 = (char *)s2;
    i = 0;
    while (c1[i] && c2[i] && i < n)
    {
        if (c1[i] != c2[i])
            return (c1[i] - c2[i]);
        i++;
    }
    return (0);
}