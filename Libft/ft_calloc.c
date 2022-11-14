/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:27:17 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/14 09:48:04 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction alloue et renvoie un pointeur 
sur une zone de la mémoire de nmemb * size octets, tous initialisés avec des 0.
**
*/

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if ((nmemb != 0 && size > ((size_t) -1 / nmemb)))
		return (NULL);
	str = (void *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	size_t	i;
// 	void	*area;

// 	i = 0;
// 	area = (void *)malloc(size * nmemb);
// 	if (!area)
// 		return (NULL);
// 	while (i < nmemb * size)
// 	{
// 		*((unsigned char *)area + i) = '\0';
// 		i++;
// 	}
// 	return (area);
// }
