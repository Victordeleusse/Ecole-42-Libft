/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:23:54 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/08 13:16:27 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
//	The strnstr() function locates the	first occurrence of the	null-termi-
//	nated string little in the	string big, where not more than	n characters
//	are searched.  Characters that appear after a `\0'	character are not
//	searched.	Since the strnstr() function is	a FreeBSD specific API,	it
//	should only be used when portability is not a concern.
*/

#include "libft.h"

// char	*ft_strnstr(const char	*big, const char *little, size_t n)
// {
// 	size_t	i;
// 	size_t	len_little;

// 	if (!big || !little)
// 		return (NULL);
// 	i = 0;
// 	len_little = ft_strlen((char *)little);
// 	if (len_little == 0)
// 		return ((char *)big);
// 	while (i < n && big[i] && len_little + i <= n)
// 	{
// 		if (len_little >= n)
// 		{
// 			if (ft_memcmp((char *)big + i, (char *)little, n) == 0)
// 				return ((char *)big + i);
// 		}
// 		if (len_little < n)
// 		{
// 			if (ft_memcmp((char *)big + i, (char *)little, len_little) == 0)
// 				return ((char *)big + i);
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

// int main(void)
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";

// 	printf("mon resultat : %s\n", ft_strnstr(haystack, "", -1));
// 	printf("la fonction : %s\n", strnstr(haystack, "", -1));
	// char * empty = (char*)"";
	// /* 1 */ check(ft_strnstr(haystack, needle, 0) == 0);
	// /* 2 */ check(ft_strnstr(haystack, needle, -1) == haystack + 1);
	// /* 3 */ check(ft_strnstr(haystack, "a", -1) == haystack);
	// /* 4 */ check(ft_strnstr(haystack, "c", -1) == haystack + 4);
	// /* 5 */ check(ft_strnstr(empty, "", -1) == empty);
	// /* 6 */ check(ft_strnstr(empty, "", 0) == empty);
	// /* 7 */ check(ft_strnstr(empty, "coucou", -1) == 0);
	// /* 8 */ check(ft_strnstr(haystack, "aaabc", 5) == haystack);
	// /* 9 */ check(ft_strnstr(empty, "12345", 5) == 0);
	// /* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5);
	// /* 11 */ check(ft_strnstr(haystack, "cd", 8) == NULL);
	// /* 12 mbueno-g */ check(ft_strnstr(haystack, "a", 1) == haystack);
	// /* 13 opsec-infosec */ check(ft_strnstr("1", "a", 1) == NULL); 
	// /* 14 opsec-infosec */ check(ft_strnstr("22", "b", 2) == NULL);
// 	write(1, "\n", 1);
// 	return (0);
// }

char	*ft_strnstr(const char	*big, const char *little, size_t n)
{
	size_t	i;
	size_t	len_little;

	if (!big || !little)
		return (NULL);
	i = 0;
	len_little = ft_strlen((char *)little);
	if (len_little == 0)
		return ((char *)big);
	while (i < n && big[i])
	{
		if (ft_memcmp((char *)(big + i), (char *)little, len_little) == 0
			&& len_little <= (n - i))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
