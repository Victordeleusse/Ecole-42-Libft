/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:24:27 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:15:28 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction memmove() copie n octets depuis la zone mémoire
** src vers la zone mémoire dest. Les deux zones peuvent se chevaucher :
** la copie se passe comme si les octets de src étaient d'abord copiés dans
** une zone temporaire qui ne chevauche ni src ni dest, et les octets sont
** ensuite copiés de la zone temporaire vers dest.
**
** VALEUR RENVOYEE : La fonction memmove() renvoie un pointeur sur dest.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = -1;
	if (d < s)
	{
		while (++i < len)
			d[i] = s[i];
	}
	else
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}

//
//
// void	*ft_memmove(void *dest, const void *src, size_t len)
// {
// 	size_t	i;
// 	void	*buffer;

// 	buffer = (void *)malloc(sizeof(char) * len);
// 	i = 0;
// 	while (i < len)
// 	{
// 		*((char *)buffer + i) = *((char *)src + i);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < len)
// 	{
// 		*((char *)dest + i) = *((char *)buffer + i);
// 		i++;
// 	}
// 	free (buffer);
// 	return (dest);
// }