/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:49:05 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:14:56 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction strchr() renvoie un pointeur sur la premiere
** occurrence du caractere c dans la chaine s.
**
** RETOUR : Un pointeur sur le caractere correspondant ou NULL si non trouve.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		else
			i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
