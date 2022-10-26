/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:00:13 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/26 12:03:44 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
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

static int	count_set(const char *str, char set, int i)
{
	while (str[i] && str[i] == set)
		i++;
	return (i);
}

static void free_str(char **ret)
{
	int	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
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
	len = count_words((char *)str, set);
	ret = (char **)malloc(sizeof(char *) * (len + 1));
	if (!ret)
		return (NULL);
	while (str[i])
	{
		i = count_set(str, set, i);
		start = i;
		while (str[i] != set && str[i])
			i++;
		if (len > j)
		{
			ret[j] = ft_substr(str, start, i - start);
			// if (j == 1)
			//   ret[j] = NULL;
			if (ret[j] == NULL)
			{
				free_str(ret);
				return NULL;
			}
			j++;
		}
	}
	ret[j] = NULL;
	return (ret);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char **r = ft_split(" hello!       kk     ", ' ');
// 	int i = 0;
// 	while (r[i])
// 	{
// 		puts(r[i]);
// 		i++;
// 	}
// }