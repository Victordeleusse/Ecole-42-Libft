/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexmaj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:21:37 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/23 16:33:58 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_putbase_hex_maj(int nbr)
{
	char			*resultat;
	char			*base;
	int				i;
	int				nbr_bis;

	base = "0123456789ABCDEF";
	nbr_bis = nbr;
	i = 0;
	if (nbr_bis == 0)
		return ("0");
	while (nbr_bis)
	{
		nbr_bis = nbr_bis / 16;
		i = i + 1;
	}
	resultat = (char *)malloc(sizeof(char) * (i + 1));
	resultat[i] = '\0';
	i = i - 1;
	while (i >= 0)
	{
		resultat[i] = base[nbr % 16];
		nbr = nbr / 16;
		i--;
	}
	return (resultat);
}

size_t	ft_putnbr_hexmaj(int nbr)
{
	size_t	taille;
	char	*resultat;

	resultat = ft_putbase_hex_maj(nbr);
	ft_putstr(resultat);
	taille = ft_strlen(resultat);
	return (taille);
}
