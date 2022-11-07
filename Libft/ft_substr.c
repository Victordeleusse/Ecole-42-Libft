/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:51:54 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 18:39:10 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((size_t)start > ft_strlen((char *)s))
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
	}
	else
	{
		if (len > ft_strlen((char *)(s + start)))
			len = ft_strlen((char *)(s + start));
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

// int	main(void)
// {
// 	char	*str;

// 	str = ft_substr("tripouille", 100, 1);
// 	printf("%s", str);
// 	write(1, "\n", 1);
// 	return (0);
// }
