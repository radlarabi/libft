/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:03:10 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/24 13:21:37 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				a;
	unsigned int	i;
	char			*str;
	char			*s;
	int				l;

	l = (int)len;
	str = (char *)haystack;
	s = (char *)needle;
	a = ft_strlen(s);
	i = 0;
	if (needle[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		if (a + i > len)
			return (NULL);
		if (s[0] == str[i] && ft_strncmp(str + i, s, a) == 0)
			return (str + i);
		i++;
	}
	return (NULL);
}
