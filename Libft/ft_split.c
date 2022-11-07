/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:46:39 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:15:00 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_mot(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i + len] && s[i + len] != c)
		len++;
	return (len);
}

static size_t	ft_nbr_mots(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			k++;
			i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (k);
}

static char	*ft_genere_mot(char const *s, char c)
{
	char	*mot;
	size_t	i;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	len = ft_len_mot(s + i, c);
	mot = (char *)malloc(sizeof(char) * (len + 1));
	if (!mot)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
		mot[k++] = s[i++];
	mot[k] = '\0';
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	taille;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	taille = ft_nbr_mots(s, c);
	tab = (char **)malloc(sizeof(char *) * (taille + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			tab[j++] = ft_genere_mot(s + i, c);
		while (s[i] != c && s[i])
			i++;
	}
	tab[j] = 0;
	return (tab);
}
