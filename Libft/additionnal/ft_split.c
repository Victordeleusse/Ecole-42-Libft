/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:46:39 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:19:21 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
				&& (str[i] == charset || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == charset || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == charset || str[i + j] == '\0') == 0)
				j++;
			if ((split[word] = (char *)malloc(sizeof(char) * (j + 1))) == NULL)
				return (unleah(split, word - 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}


// static size_t	ft_len_mot(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	len;

// 	i = 0;
// 	len = 0;
// 	while (s[i] && s[i] == c)
// 		i++;
// 	while (s[i + len] && s[i + len] != c)
// 		len++;
// 	return (len);
// }

// static size_t	ft_nbr_mots(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	k;

// 	i = 0;
// 	k = 0;
// 	while (s[i])
// 	{
// 		while (s[i] == c && s[i])
// 			i++;
// 		if (s[i] != c && s[i])
// 		{
// 			k++;
// 			i++;
// 		}
// 		while (s[i] != c && s[i])
// 			i++;
// 	}
// 	return (k);
// }

// static char	*ft_genere_mot(char const *s, char c)
// {
// 	char	*mot;
// 	size_t	i;
// 	size_t	k;
// 	size_t	len;

// 	i = 0;
// 	k = 0;
// 	len = ft_len_mot(s + i, c);
// 	mot = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!mot)
// 		return (NULL);
// 	while (s[i] == c && s[i])
// 		i++;
// 	while (s[i] != c && s[i])
// 		mot[k++] = s[i++];
// 	mot[k] = '\0';
// 	return (mot);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**tab;
// 	size_t	taille;
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	taille = ft_nbr_mots(s, c);
// 	tab = (char **)malloc(sizeof(char *) * (taille + 1));
// 	if (!tab)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		while (s[i] == c && s[i])
// 			i++;
// 		if (s[i] != c && s[i])
// 			tab[j++] = ft_genere_mot(s + i, c);
// 		while (s[i] != c && s[i])
// 			i++;
// 	}
// 	tab[j] = 0;
// 	return (tab);
// }
