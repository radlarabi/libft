/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:11:20 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/19 17:20:53 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	check_start(const char *str, char *s)
{
	int	count;

	count = 0;
	while (str[count] && ft_strchr(s, str[count]))
		count++;
	return (count);
}

int	check_end(const char *str, char *s)
{
	int	count;
	int	str_len;

	str_len = ft_strlen(str);
	count = 0;
	while (0 < str_len && ft_strchr(s, str[str_len - 1]))
	{
		count++;
		str_len--;
	}		
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	char				*ret;
	int					start;
	int					end;
	char				*str;
	char				*s;

	str = (char *)s1;
	s = (char *)set;
	i = 0;
	start = check_start(str, s);
	end = check_end(str, s);
	ret = (char *)malloc(ft_strlen(str) - start - end + 1);
	if(!ret)
		return (0);
	while (i < ft_strlen(str) - start - end)
	{
		ret[i] = str[start + i];
		i++;
	}
	return (ret);
}
// int main()
// {
// 	char *p;
// 	p = ft_strtrim("/*bjlcxd*/**","*/");
// 	printf("%s",p);
// 	return 0;
// }
