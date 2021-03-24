/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:40:23 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 17:02:12 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{ 
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main()
{
	int a = 'b';
	int b = '[';
	int c = '8';
	printf("%c\n", ft_toupper(a));
	printf("%c\n", ft_toupper(b));
	printf("%c\n", ft_toupper(c));
}
