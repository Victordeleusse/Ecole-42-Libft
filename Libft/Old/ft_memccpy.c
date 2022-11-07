/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:52:41 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:22:03 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction memccpy() copie au plus n octets de la zone
** mémoire s vers la zone mémoire d, s'arrêtant dès qu'elle rencontre
** le caractère c.
**
** VALEUR RENVOYEE : La fonction memccpy() renvoie un pointeur sur le caractère
** immédiatement après c dans la zone dest, ou NULL si c n'a pas été trouvé
** dans les n premiers caractères de s.
*/

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		dst++;
		src++;
		i++;
	}
	return (NULL);
}
