/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 12:28:36 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/13 13:01:42 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int a;

	a = n;
	if (a < 0)
	{
		ft_putchar('-', fd);
		a = -a;
	}
	if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
	else
	{
		ft_putchar(a + '0', fd);
	}
}

int	main()
{
	int fd;
	int n;

	fd = 2;
	n = 569856214;
	ft_putnbr_fd(n, fd);
	return (0);
}
