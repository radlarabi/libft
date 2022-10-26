/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:52:20 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/24 21:47:51 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if ((n >= '0' && n <= '9')
		|| (n >= 'a' && n <= 'z')
		|| (n >= 'A' && n <= 'Z'))
		return (1);
	return (0);
}
