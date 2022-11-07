/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:27:11 by vde-leus          #+#    #+#             */
/*   Updated: 2022/10/24 17:34:05 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*temp;
// 	t_list	*begin;

// 	if (!lst || !*lst || !del)
// 		return ;
// 	begin = *lst;
// 	while (begin)
// 	{
// 		temp = (begin)->next;
// 		ft_lstdelone((begin), del);
// 		(begin) = temp;
// 	}
// }

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

// int	main(void)
// {
// 	t_list	*start;
// 	t_list	*t1;
// 	t_list	*t2;
// 	t_list	*t3;
// 	t_list	*t4;
// 	t_list	*t5;
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;
// 	char	*test4;
// 	char	*test5;

// 	test1 = (char *)malloc(sizeof(char) * 2);
// 	test2 = (char *)malloc(sizeof(char) * 2);
// 	test3 = (char *)malloc(sizeof(char) * 2);
// 	test4 = (char *)malloc(sizeof(char) * 2);
// 	test5 = (char *)malloc(sizeof(char) * 2);
// 	test1[0] = '1';
// 	test1[1] = '\0';
// 	test2[0] = '2';
// 	test2[1] = '\0';
// 	test3[0] = '3';
// 	test3[1] = '\0';
// 	test4[0] = '4';
// 	test4[1] = '\0';
// 	test5[0] = '5';
// 	test5[1] = '\0';
// 	t1 = ft_lstnew(test1);
// 	t2 = ft_lstnew(test2);
// 	t3 = ft_lstnew(test3);
// 	t4 = ft_lstnew(test4);
// 	t5 = ft_lstnew(test5);
// 	t1->next = t2;
// 	t2->next = t3;
// 	t3->next = t4;
// 	t4->next = t5;
// 	start = t3;
// 	ft_lstclear(&t1, free);
// 	while (start)
// 	{
// 		printf("Contenu dans l element : %s\n", start->content);
// 		start = start->next;
// 	}
// 	return (0);
// }

//ft_lstclear(&start, free)