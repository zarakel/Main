/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:09:52 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/29 18:36:34 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	while (s1[j])
		j++;
	dest = (char *)malloc(sizeof(*dest) * (j + 1));
	if (!(dest))
		return (NULL);
	i = 0;
	while (i < j)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char s1[] = "poney";
	printf("%s\n", ft_strdup(s1));
}
