/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:41:52 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/23 16:33:37 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_len_nbr(unsigned int nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
		len = 2;
	while (nbr / 10)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

size_t	ft_put_unsnbr(unsigned int nbr)
{
	size_t	len;

	len = ft_len_nbr(nbr);
	if (nbr >= 10)
	{
		ft_put_unsnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
	return (len);
}

// int	main(void)
// {
// 	size_t			taille;
// 	unsigned int	nbr;

// 	nbr = -848;
// 	taille = ft_put_unsnbr(nbr);
// 	printf("\n%u\n", nbr);
// 	printf("%d", taille);
// 	return (0);
// }