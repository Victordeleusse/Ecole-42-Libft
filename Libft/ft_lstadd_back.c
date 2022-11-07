/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:39:57 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:16:25 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	last = ft_lstlast(*alst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*elem1;
// 	t_list	*elem2;
// 	t_list	*elem3;
// 	t_list	*new;
// 	t_list	*last;
// 	t_list	**alst;
// 	char	str1[] = "bonjour Victor";
// 	char	str2[] = " et ";
// 	char	str3[] = "Titouan";
// 	char	str4[] = "! ";

// 	elem1 = ft_lstnew(str1);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = 0;
// 	new = ft_lstnew(str4);
// 	alst = &elem1;
// 	ft_lstadd_back(alst, new);
// 	last = ft_lstlast(*alst);
// 	printf("%s", (char *)last->content);
// 	return (0);
// }
