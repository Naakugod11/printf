/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgulec <dgulec@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:13:07 by dgulec            #+#    #+#             */
/*   Updated: 2024/10/17 22:23:26 by dgulec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*boat;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		boat = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = boat;
	}
	*lst = NULL;
}
