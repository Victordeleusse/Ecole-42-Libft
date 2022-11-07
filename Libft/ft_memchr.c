/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:47:31 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:15:41 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction memchr() examine les n premiers octets de la zone
** mémoire pointée par s à la recherche du caractère c. Le premier octet
** correspondant à c (interprété comme un unsigned char) arrête l'opération.
**
** VALEUR RENVOYEE : La fonction memchr() renvoit un pointeur sur l'octet
** correspondant, ou NULL si le caractère n'est pas présent dans la zone de
** mémoire concernée.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;
	size_t			i;

	str = (unsigned char *)s;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == letter)
			return (str + i);
		i++;
	}
	return (NULL);
}
