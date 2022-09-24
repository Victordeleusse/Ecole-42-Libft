/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:17:04 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/13 11:11:50 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *dst, const char *src)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen((char *)dst);
	len_src = ft_strlen((char *)src);
	i = 0;
	if (len_src > len_dst)
		return (NULL);
	while (i < len_dst)
	{
		if (ft_memcmp(dst + i, src, len_src) == 0)
		{	
			printf("%d, %s\n", i, "ök");
			return ((char *)(dst + i));
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	dst[] = "bonjour a tous";
	const char	src[] = "a hfh";
	
	printf("%s", ft_strstr(dst, src));
	return (0);	
}
*/