/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-leus <vde-leus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:27:39 by vde-leus          #+#    #+#             */
/*   Updated: 2022/11/07 14:15:18 by vde-leus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_CREAT | O_WRONLY, 0700);
// 	if (fd == -1)
// 		return (1);
// 	ft_putchar_fd(4 + '0', fd);
// 	return (0);
// }