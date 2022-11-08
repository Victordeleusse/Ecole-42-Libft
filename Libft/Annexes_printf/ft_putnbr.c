/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:35:59 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/23 16:34:06 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_len_nbr(int nbr)
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

static void	ft_affichage_nbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_affichage_nbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}

size_t	ft_putnbr(int nbr)
{
	size_t	len;

	len = ft_len_nbr(nbr);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -1 * nbr;
	}
	ft_affichage_nbr(nbr);
	return (len);
}

// int	main(void)
// {
// 	int		nbr = -37;
// 	size_t	i;
	
// 	i = ft_putnbr(nbr);
// 	printf("\n\n%d", i);
// 	return (0);
// }