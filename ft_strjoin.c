/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:11:41 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/31 14:22:11 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	char	*b;
	char	*c;
	size_t	lena;
	size_t	lenb;
	size_t	i;
	size_t	j;
	size_t	k;

	lena = 0;
	lenb = 0;
	a = (char *)s1;
	b = (char *)s2;
	while (a[lena])
		lena++;
	while (b[lenb])
		lenb++;
	k = lena + (lenb + 1);
	c = (char *)malloc(sizeof(char) * (k));
	if(!c)
		return (NULL);
	i = 0;
	j = 0;
	while (i < lena)
	{
		c[i] = a[i];
		i++;
	}
	while (i < k)
	{
		c[i] = b[j];
		i++;
		j++;
	}
	c[i] =  '\0';
	return (c);
}

int	main()
{
	char s1[] = "alle";
	char s2[] = "mand";
	printf("%s\n", ft_strjoin(s1, s2));
}
