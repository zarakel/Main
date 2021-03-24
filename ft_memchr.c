/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:53:51 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/24 14:10:48 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;
	char *str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i]++;
		i++;
		if(str[i] == c)
			return (str + i);
	}
	return (NULL);
}

int	main()
{
	char st[] = "Bordo";
	int a = 'o';
	int b = 'y';
	printf("%s\n", ft_memchr(st, a, 2));
	printf("%s\n", ft_memchr(st, b, 6));

}
