/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:17:54 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:16:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Ajoute l’élément new au début de la liste
*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*begin;

	if (!alst || !*alst)
	{
		*alst = new;
		return ;
	}
	begin = *alst;
	new->next = begin;
	*alst = new;
}
