/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:03:10 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/20 14:12:01 by rlarabi          ###   ########.fr       */
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
	if (!s)
		return (0);
	a = ft_strlen(s);
	i = 0;
	while (str[i] && i < len)
	{
		if (s[0] == str[i])
		{
			if (ft_strncmp(str + i, s, a) == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aabc";
	char	*empty = (char *)"";

	printf("%d\n", ft_strnstr(haystack, needle, 0) == 0);
	printf("%d\n", ft_strnstr(haystack, needle, -1) == haystack + 1);
	printf("%d\n", ft_strnstr(haystack, "a", -1) == haystack);
	printf("%d\n", ft_strnstr(haystack, "c", -1) == haystack + 4);
	
	/* err */ printf("%d\n", ft_strnstr(empty, "", -1) == empty);
	/* err */ printf("%d\n", ft_strnstr(empty, "", 0) == empty);
	
	printf("%d\n", ft_strnstr(empty, "coucou", -1) == 0);
	printf("%d\n", ft_strnstr(haystack, "aaabc", 5) == haystack);
	printf("%d\n", ft_strnstr(empty, "12345", 5) == 0);
	printf("%d\n", ft_strnstr(haystack, "abcd", 9) == haystack + 5);

	/* err */ printf("%d\n", ft_strnstr(haystack, "cd", 8) == NULL);
	
	printf("%d\n", ft_strnstr(haystack, "a", 1) == haystack);
	printf("%d\n", ft_strnstr("1", "a", 1) == NULL);
	printf("%d\n", ft_strnstr("22", "b", 2) == NULL);

	printf("\n\n\n");

	printf("%d\n", strnstr(haystack, needle, 0) == 0);
	printf("%d\n", strnstr(haystack, needle, -1) == haystack + 1);
	printf("%d\n", strnstr(haystack, "a", -1) == haystack);
	printf("%d\n", strnstr(haystack, "c", -1) == haystack + 4);
	printf("%d\n", strnstr(empty, "", -1) == empty);
	printf("%d\n", strnstr(empty, "", 0) == empty);
	printf("%d\n", strnstr(empty, "coucou", -1) == 0);
	printf("%d\n", strnstr(haystack, "aaabc", 5) == haystack);
	printf("%d\n", strnstr(empty, "12345", 5) == 0);
	printf("%d\n", strnstr(haystack, "abcd", 9) == haystack + 5);
	printf("%d\n", strnstr(haystack, "cd", 8) == NULL);
	printf("%d\n", strnstr(haystack, "a", 1) == haystack);
	printf("%d\n", strnstr("1", "a", 1) == NULL);
	printf("%d\n", strnstr("22", "b", 2) == NULL);
	return (0);
}
