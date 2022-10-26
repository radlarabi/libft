/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:09:54 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/26 09:39:45 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ret = (char *)malloc(len * sizeof(char) + 1);
	if (!ret)
		return (NULL);
	while (s[i] && i < len)
	{
		ret[i] = s[start++];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
