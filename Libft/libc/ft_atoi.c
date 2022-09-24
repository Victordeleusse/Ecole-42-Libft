/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:12:15 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:20:59 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	toi;
	int	neg;

	i = 0;
	toi = 0;
	neg = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		toi = (toi * 10) + (str[i] - 48);
		i++;
	}
	return (neg * toi);
}

/*
int	main(void)
{
	const char	test[] = "    ++5463afG";

	printf("ft_atoi : %d\n\n", ft_atoi(test));
	printf("atoi    : %d", atoi(test));
	return (0);
}
*/