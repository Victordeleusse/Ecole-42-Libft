/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:09:25 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:15:37 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION : La fonction memcmp() compare les n premiers octets des zones
** mémoire s1 et s2. Elle renvoie un entier inférieur, égal, ou supérieur à
** zéro, si s1 est respectivement inférieure, égale ou supérieur à s2.
**
** VALEUR RENVOYEE : La fonction memcmp() renvoie un entier négatif, nul ou
** positif si les n premiers octets de s1 sont respectivement inférieurs,
** égaux ou supérieurs aux n premiers octets de s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char haystack[30] = "aabcabcd";
// 	char needle[10] = "aabc";

// 	printf("mon resultat : %d\n", ft_memcmp(haystack, needle, 3));
// 	printf("la fonction : %d\n", memcmp(haystack, needle, 3));
// 	return (0);
// }