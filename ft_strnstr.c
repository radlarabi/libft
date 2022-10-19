/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:03:10 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/13 16:21:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				a;
	unsigned int	i;
	char			*str;
	char			*s;
	
	str = (char *)haystack;
	s = (char *)needle;
	if (s == NULL)
		return (str);
	a = ft_strlen(s);
	i = 0;
	while (str[i] && i < len)
	{
		if(s[0] == str[i])
		{
			if(ft_strncmp(str + i, s, a) == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}

int main()
{
	char a[]= "Foo Bar Baz";
	char b[] = "o";
	char *c;
	c =	ft_strnstr(a,b,10);
	puts(c);
	return 0;
}
