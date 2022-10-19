/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:47:05 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/18 21:49:12 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst->next)
		i++;
	return (i);
}