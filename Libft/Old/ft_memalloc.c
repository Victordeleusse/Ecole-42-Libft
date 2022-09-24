/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:16:33 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/13 14:38:45 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*area;
	size_t	i;

	i = 0;
	area = (void *)malloc(size);
	if (!area || size == 0)
		return (NULL);
	while (i < size)
	{
		*((unsigned char *)area + i) = 0;
		i++;
	}
	return (area);
}
