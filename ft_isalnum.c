/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:11:03 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 16:14:09 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') 
	|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main()
{
	int b = '[';
	int c = 'a';
	int d = '8';
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d", ft_isalnum(d));
}
