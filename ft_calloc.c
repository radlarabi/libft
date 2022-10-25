/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:03:58 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/20 19:07:16 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *str;

    if (count >= SIZE_MAX || size >= SIZE_MAX)
        return (NULL);
    str = malloc(count * size);
    if (!str)
        return (NULL);
    ft_bzero(str, count * size);
    return (str);
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
    void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};
    printf("%d\n", !memcmp(p ,e,4));
    return 0;
}