/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-prad <vde-prad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:35:11 by vde-prad          #+#    #+#             */
/*   Updated: 2022/06/07 17:51:37 by vde-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((*lst)->next == 0)
		ft_lstdelone(*lst, del);
	else
	{
		while ((*lst)->next != 0)
		{
			ft_lstdelone(*lst, del);
			*lst = (*lst)->next;
		}
		ft_lstdelone(*lst, del);
	}
}
