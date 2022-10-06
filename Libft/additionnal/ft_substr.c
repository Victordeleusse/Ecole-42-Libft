/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:51:54 by vde-leus          #+#    #+#             */
/*   Updated: 2022/10/06 11:39:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (len > ft_strlen((char *)(s + start)))
		len = ft_strlen((char *)(s + start));
	if ((size_t)start > ft_strlen((char *)s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		while (i < len && s[start + i])
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	signal(SIGSEGV, sigsegv);
// 	title("ft_substr\t: ")

// 	char *s = ft_substr("tripouille", 0, 42000);
// 	/* 1 */ check(!strcmp(s, "tripouille"));
// 	/* 2 */ mcheck(s, strlen("tripouille") + 1); free(s); showLeaks();

// 	s = ft_substr("tripouille", 1, 1);
// 	/* 3 */ check(!strcmp(s, "r"));
// 	/* 4 */ mcheck(s, 2); free(s); showLeaks();

// 	s = ft_substr("tripouille", 100, 1);
// 	/* 5 */ check(!strcmp(s, ""));
// 	/* 6 */ mcheck(s, 1); free(s); showLeaks();

// 	char * str = strdup("1");
// 	s = ft_substr(str, 42, 42000000);
// 	/* 7 */ check(!strcmp(s, ""));
// 	/* 8 */ mcheck(s, 1); free(s); free(str); showLeaks();

// 	str = strdup("0123456789");
// 	s = ft_substr(str, 9, 10);
// 	/* 9  mbueno-g */ check(!strcmp(s, "9"));
// 	/* 10  mbueno-g */ mcheck(s, 2); free(s); free(str); showLeaks();

// 	s = ft_substr("42", 0, 0);
// 	/* 11  fcaquard */ check(!strcmp(s, ""));
// 	/* 12  fcaquard */ mcheck(s, 1); free(s); showLeaks();

// 	s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
// 	/* 13  dfarhi */ check(!strcmp(s, "LES HARICOTS !"));
// 	/* 14  dfarhi */ mcheck(s, 15); free(s); showLeaks();

// 	s = ft_substr("test", 1, 2);
// 	/* 15  dfarhi */ check(!strcmp(s, "es"));
// 	/* 16  dfarhi */ mcheck(s, 3); free(s); showLeaks();

// 	write(1, "\n", 1);
// 	return (0);
// }