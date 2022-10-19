/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:18:56 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/08 16:56:03 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a_len;
	int		b_len;
	int		i;
	char	*ret;

	a_len = 0;
	b_len = 0;
	i = -1;
	while (s1[a_len])
		a_len++;
	while (s2[b_len])
		b_len++;
	ret = (char *)malloc(a_len + b_len + 1);
	while (s1[++i])
		ret[i] = s1[i];
	i = -1;
	while (s2[++i])
		ret[a_len + i] = s2[i];
	ret[a_len + i] = '\0';
	return (ret);
}
