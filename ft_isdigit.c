/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:02:07 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 16:09:07 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
			return (1);
	return (0);
}

int	main()
{
	int b = '1';
	int c = 'a';
	int d = '8';
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
	printf("%d", ft_isdigit(d));
}
