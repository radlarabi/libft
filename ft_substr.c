/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:09:54 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/19 17:20:49 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ret;
	unsigned int		i;

	i = 0;
	ret = (char *)malloc(len * sizeof(char) + 1);
	if (!ret)
		return (0);
	while (i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}


// int main()
// {
// 	char *r = ft_substr("01234",10,10);
// 	puts(r);
// }