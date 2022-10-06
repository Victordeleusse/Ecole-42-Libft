/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:18:05 by vde-leus          #+#    #+#             */
/*   Updated: 2022/10/06 11:25:47 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Alloue avec malloc et retourne une copie de la chaine de caractères donnée 
en argument, sans les caractères spécifiés dans le set donné en argument au 
début et à la fin de la chaine de caractères. */

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
	size_t	debut;
	size_t	fin;
	size_t	i;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	debut = ft_debut(s1, set);
	fin = ft_fin(s1, set);
	if (debut == ft_strlen((char *)s1)
		|| fin == ft_strlen((char *)s1) || debut > fin)
		dest = (char *)malloc(sizeof(char));
	else
	{
		dest = (char *)malloc(sizeof(char) * (fin - debut + 2));
		while (debut + i <= fin && s1[debut + i])
		{
			dest[i] = s1[debut + i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	printf("ma fonction : %s\n", ft_strtrim("   xxx   xxx", " x"));
// 	printf("comp : %d", ft_memcmp("", ft_strtrim("   xxx   xxx", " x"), 5));

	//printf("man : %s\n", strtrim("   xxxtripouille", " x"));
	
	// /* 1 */ check(!strcmp(s, "tripouille"));
	// /* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

	// s = ft_strtrim("tripouille   xxx", " x");
	// /* 3 */ check(!strcmp(s, "tripouille"));
	// /* 4 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

	// s = ft_strtrim("   xxxtripouille   xxx", " x");
	// /* 5 */ check(!strcmp(s, "tripouille"));
	// /* 6 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();
	
	// s = ft_strtrim("   xxx   xxx", " x");
	// /* 7 */ check(!strcmp(s, ""));
	// /* 8 */ mcheck(s, 1); free(s); showLeaks();

	// s = ft_strtrim("", "123");
	// /* 9 */ check(!strcmp(s, ""));
	// /* 10 */ mcheck(s, 1); free(s); showLeaks();

	// s = ft_strtrim("123", "");
	// /* 11 */ check(!strcmp(s, "123"));
	// /* 12 */ mcheck(s, 4); free(s); showLeaks();

	// s = ft_strtrim("", "");
	// /* 13 */ check(!strcmp(s, ""));
	// /* 14 */ mcheck(s, 1); free(s); showLeaks();
	
	// s = ft_strtrim("abcdba", "acb");
	// /* opsec-infosec 15 */ check(!strcmp(s, "d"));
 	// /* opsec-infosec 16 */ mcheck(s, 2); free(s); showLeaks();
	
// 	write(1, "\n", 1);
// 	return (0);
// }