/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:27:11 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:24:04 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*begin;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		begin = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = begin;
	}
}
