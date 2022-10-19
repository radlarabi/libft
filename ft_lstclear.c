/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlarabi <rlarabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:11:10 by rlarabi           #+#    #+#             */
/*   Updated: 2022/10/19 15:15:59 by rlarabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *c)
{
	char	*r;
	int		i;

	i = 0;
	r = (char *)c;
	while (r[i])
	{
		free(r[i]);
		i++;
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    int     i;

    i = 0;
    while (lst[i]->next)
    {
        ft_lstdelone(lst[i],&del);
        i++;
    }
    lst[i] = NULL;
    
}