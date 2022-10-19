/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:09:14 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/18 17:06:28 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned int     i;

    i = 0;
    str = malloc(sizeof(char) * ft_strlen(s) + 1);
    while (i < ft_strlen(str))
    {
        str[i] = f(i ,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);   
}

char    f(unsigned int a, char c)
{
    char    b;
    b =  c + a;
    return (b);
}

int main()
{   
    char *r;
    r = "abc";
    printf("%s",ft_strmapi(r,&f));
    return 0;    
}