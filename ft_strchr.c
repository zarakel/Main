/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:12:30 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 17:29:13 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	int i;
	char *st;

	i = 0;
	st = (char *)s;
	while (st[i])
	{	
		if (st[i] == c)
		return (st + i);
	i++;
	}
	return (0);
}

int	main()
{
	char s[] = "Pangolin";
	int a = 'o';
	int b = 'y';
	printf("%s\n", ft_strchr(s, a));
	printf("%s\n", ft_strchr(s, b));
}
