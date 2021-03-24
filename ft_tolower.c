/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:04:13 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 17:11:54 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int	main()
{
	int a = 'B';
	int b = '[';
	int c = '8';
	printf("%c\n", ft_tolower(a));
	printf("%c\n", ft_tolower(b));
	printf("%c\n", ft_tolower(c));
}
