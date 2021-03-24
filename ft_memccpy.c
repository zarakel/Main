/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:21:52 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/23 15:46:05 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *s;
	char *d;
	size_t i;

	d = dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if(s[i] == (char)c)
		{
			return (d + i + 1);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	int c = 'y';
	char dst[] = "Taboulet";
	char src[] = "Zeubi";
	printf("%s",ft_memccpy(dst, src, c, 5));
}
