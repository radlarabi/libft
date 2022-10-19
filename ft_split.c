/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:00:13 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/19 14:13:30 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char *str, char c)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	j = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && j)
		{
			count++;
			j = 0;
		}
		if (str[i] == c)
			j = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char set)
{
	int		j;
	int		i;
	int		len;
	char	**ret;
	int		start;

	j = 0;
	i = 0;
	ret = (char **)malloc(sizeof(char *) * count_words((char *)str, set));
	while (str[i])
	{
		while (str[i] == set)
			i++;
		start = i;
		while (str[i] != set && str[i])
			i++;
		len = i;
		ret[j] = ft_substr(str, start, len - start);
		j++;
	}
	return (ret);
}

int	main(void)
{
	char **r;

	r = ft_split("    lololo", ' ');
	puts(r[0]);
	return (0);
}