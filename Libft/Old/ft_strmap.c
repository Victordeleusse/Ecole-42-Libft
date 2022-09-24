/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:25:51 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/13 15:11:44 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = ft_strlen((char *)s);
	dest = ft_strnew(len);
	i = 0;
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	test[] = "bonjour";
	size_t	i;

	i = 0;
	printf("%s", ft_strmap(test, ft_strcap));
	return (0);
}
*/