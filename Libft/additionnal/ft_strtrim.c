/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:18:05 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:19:49 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_select(char c, char const *set)
{
	size_t	len;

	len = 0;
	while (set[len])
	{
		if (c == set[len])
			return (1);
		len++;
	}
	return (0);
}

static int	ft_debut(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_select(s1[i], set) == 1 && s1[i])
		i++;
	return (i);
}

static int	ft_fin(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen((char *)s1);
	i = 0;
	while (ft_select(s1[len - 1 - i], set) == 1 && s1[len - 1 - i])
		i++;
	return (len - 1 - i);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int		debut;
	int		fin;
	size_t	range;
	size_t	i;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	debut = ft_debut(s1, set);
	printf("debut : %d\n", debut);
	fin = ft_fin(s1, set);
	printf("fin : %d\n", fin);
	dest = (char *)malloc(sizeof(char) * (fin - debut + 2));
	if (!dest)
		return (NULL);
	while (debut + i <= fin && s1[debut + i])
	{
		dest[i] = s1[debut + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
