/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:27:17 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:16:57 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if ((nmemb == SIZE_MAX && size > 1) || (size == SIZE_MAX && nmemb > 1))
		return (NULL);
	str = (void *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	size_t	i;
// 	void	*area;

// 	i = 0;
// 	area = (void *)malloc(size * nmemb);
// 	if (!area)
// 		return (NULL);
// 	while (i < nmemb * size)
// 	{
// 		*((unsigned char *)area + i) = '\0';
// 		i++;
// 	}
// 	return (area);
// }