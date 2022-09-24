/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:34:40 by vde-leus          #+#    #+#             */
/*   Updated: 2022/09/21 11:19:05 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_len_int(int n)
{
	size_t	len;

	if (n < 0)
		len = 2;
	else
		len = 1;
	while ((n / 10) != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*resultat;

	i = 0;
	len = ft_strlen((char *)str);
	resultat = (char *)malloc(sizeof(char) * (len + 1));
	if (!resultat)
		return (NULL);
	while (str[i])
	{
		resultat[i] = str[i];
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	char	*resultat;
	size_t	k;

	i = 0;
	k = 0;
	len = ft_len_int(n);
	resultat = (char *)malloc(sizeof(char) * (len + 1));
	resultat[len] = '\0';
	if (n < 0)
	{	
		resultat[0] = '-';
		k = 1;
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = -n;
	}
	while (i < len - k)
	{
		resultat[len - 1 - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}	
	return (resultat);
}

/*
int	main(void)
{
	int	test = -2147483648;

	printf("%s", ft_itoa(test));
	return (0);
}
*/