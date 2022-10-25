/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:57:37 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/20 11:05:45 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*a;
	int		i;

	i = 0;
	a = (unsigned char *)s;
	while (a[i])
	{
		if(a[i] == (unsigned char)c)
			return (char *)(a + i);
		i++;
	}
	return (char *) (a + i);
}

