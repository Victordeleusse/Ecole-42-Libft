/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:18:05 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/10 18:32:42 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue avec malloc et retourne une copie de la chaine de caractères donnée 
en argument, sans les caractères spécifiés dans le set donné en argument au 
début et à la fin de la chaine de caractères. */

#include "libft.h"

// static int	ft_select(char c, char const *set)
// {
// 	size_t	len;

// 	len = 0;
// 	while (set[len])
// 	{
// 		if (c == set[len])
// 			return (1);
// 		len++;
// 	}
// 	return (0);
// }

// static int	ft_debut(char const *s1, char const *set)
// {
// 	size_t	i;

// 	i = 0;
// 	while (ft_select(s1[i], set) == 1 && s1[i])
// 		i++;
// 	return (i);
// }

// static int	ft_fin(char const *s1, char const *set)
// {
// 	size_t	len;
// 	size_t	i;

// 	len = ft_strlen((char *)s1);
// 	i = 0;
// 	while (ft_select(s1[len - 1 - i], set) == 1 && s1[len - 1 - i])
// 		i++;
// 	return (len - 1 - i);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	debut;
// 	size_t	fin;
// 	size_t	i;
// 	char	*dest;

// 	if (!s1 || !set)
// 		return (NULL);
// 	i = 0;
// 	debut = ft_debut(s1, set);
// 	fin = ft_fin(s1, set);
// 	if (debut == ft_strlen((char *)s1)
// 		|| fin == ft_strlen((char *)s1) || debut > fin)
// 		dest = (char *)malloc(sizeof(char));
// 	else
// 	{
// 		dest = (char *)malloc(sizeof(char) * (fin - debut + 2));
// 		if (!dest)
// 			return (NULL);
// 		while (debut + i <= fin && s1[debut + i])
// 		{
// 			dest[i] = s1[debut + i];
// 			i++;
// 		}
// 	}
// 	if (!dest)
// 		return (NULL);
// 	dest[i] = '\0';
// 	return (dest);
// }

static int	ft_check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_limites(char const *s1, char const *set, size_t *debut, size_t *fin)
{
	size_t	len;

	len = ft_strlen((const char *)s1);
	while (ft_check_set(s1[*debut], set) == 1 && s1[*debut])
		*debut = *debut + (long unsigned)1;
	len = len - 1;
	while (ft_check_set(s1[len], set) == 1 && s1[len])
		len--;
	*fin = (long unsigned)len;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	size_t	len;
	size_t	i;
	char	*resultat;

	debut = 0;
	fin = 0;
	ft_limites(s1, set, &debut, &fin);
	if (debut > fin || debut == ft_strlen(s1))
		len = 0;
	else
		len = fin - debut + 1;
	resultat = (char *)malloc(sizeof(char) * (len + 1));
	if (!resultat)
		return (NULL);
	i = 0;
	while (i <= (fin - debut) && fin != (long unsigned)-1)
	{	
		resultat[i] = (s1)[debut + i];
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}

// int	main(void)
// {
// 	char const	s1[] = "   xxx   xx x xx";
// 	char const	set[] = " x";
// 	size_t	debut;
// 	size_t	fin;

// 	ft_limites(s1, set, &debut, &fin);
// 	printf("debut : %c\n", s1[debut]);
// 	printf("fin : %c\n", s1[fin]);
// 	printf("debut : %ld\n", debut);
// 	printf("fin : %ld\n", fin);
// 	if (fin == (long unsigned)-1)
// 		printf("OK\n");
// 	if (debut == ft_strlen(s1))
// 		printf("OK2\n");
// 	printf("Resultat : %s\n", ft_strtrim(s1, set));
// 	return (0);
// }
