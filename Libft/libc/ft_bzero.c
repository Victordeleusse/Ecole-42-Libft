/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:04:11 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:21:04 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int	main(void)
{
	char	test[] = "Bonjour";
	size_t	n;
	int		i;

	i = 0;
	n = sizeof(char) * 7;
	ft_bzero(test, n);
	test[0] = 'a';
	test[1] = 'a';
	test[2] = 'a';
	test[3] = 'a';
	while (test[i])
		printf("%c", test[i++]);
}
*/