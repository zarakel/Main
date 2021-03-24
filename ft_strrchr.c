/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:30:32 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 17:52:49 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *st;

	i = 0;
	st = (char *)s;
	while (st[i])
		i++;
	while (st[i] != st[0])
	{
		if (st[i] == c)
			return (st + i);
		i--;
	}
	return (0);
}

int	main()
{
	char s[] = "Pangolon";
	int a = 'o';
	int b = 'y';
	int c = '\0';
	printf("%s\n", ft_strrchr(s, a));
	printf("%s\n", ft_strrchr(s, b));
	printf("%s\n", ft_strrchr(s, c));
}
