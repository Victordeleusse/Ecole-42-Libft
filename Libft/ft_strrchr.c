/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:05:14 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:14:14 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction strrchr() renvoie un pointeur sur la derniere
** occurrence du caractere c dans la chaine s.
**
** RETOUR : un pointeur sur le caractere correspondant, NULL si non trouve.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s + ft_strlen((char *)s);
	while (*str != (char)c)
	{
		if (str == s)
			return (NULL);
		str--;
	}
	return (str);
}

// char	*ft_strrchr(const char *str, int c)
// {
// 	size_t	i;

// 	i = ft_strlen((char *)str) + 1;
// 	while (i >= 0)
// 	{
// 		if (str[i] != c)
// 			i--;
// 		else
// 			return ((char *)str + i);
// 	}
// 	return (0);
// }
