/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 08:34:23 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/16 12:23:49 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	egal(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && egal(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && egal(set, s1[j - 1]))
		j--;
	a = malloc(j - i + 1);
	if (!a)
		return (0);
	k = 0;
	while (i < j)
		a[k++] = s1[i++];
	a[k] = 0;
	return (a);
}

int	main()
{
	char s1[] = "";
	char s2[] = "";
	printf("%s\n", ft_strtrim(s1, s2));
}
