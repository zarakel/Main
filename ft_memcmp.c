/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:22:49 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/20 17:16:26 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char 	*str1;
	unsigned char 	*str2;
	unsigned int 	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
				return str1[i] - str2[i];
		i++;
	}
	return (0);
}

int	main()
{
	char s[] = "Omega";
	char c[] = "Omega";
	printf("%d\n", ft_memcmp(s, c, 5));
}
