/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:32:45 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/08 13:19:39 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*begin;

	begin = lst;
	while (begin != NULL && begin->next != NULL)
		begin = begin->next;
	return (begin);
}

// int	main(void)
// {
// 	t_list	*elem1;
// 	t_list	*elem2;
// 	t_list	*elem3;
// 	t_list	*last;
// 	int		i1 = 1;
// 	int		i2 = 2;
// 	int		i3 = 3;

// 	elem1 = ft_lstnew(&i1);
// 	elem2 = ft_lstnew(&i2);
// 	elem3 = ft_lstnew(&i3);
// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = 0;
// 	last = ft_lstlast(elem1);
// 	printf("%d", *(int *)last->content);
// 	return (0);
// }