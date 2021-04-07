/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:07:28 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/30 15:42:32 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *a;
	size_t i;
	unsigned int z;
		
	z = len + start;
	a = (char *)malloc(sizeof(char) * (len));
	if (!a)
		return (NULL);
	i = 0;
	while (start < z)
	{
		a[i] = (char)s[start];
		i++;
		start++;
	}
	return (a);
}

int main()
{
	char *s = "Bonjour";
	unsigned int st = 2;
	size_t len = 10;

	printf("%s\n", ft_substr(s, st, len));
}
