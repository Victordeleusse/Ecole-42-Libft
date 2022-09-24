/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:23:54 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:23:14 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((char *)little);
	while (i < n && (n - i) >= len)
	{	
		if (ft_memcmp(big + i, little, len) == 0)
			return ((char *)little);
		i++;
	}
	return (NULL);
}
