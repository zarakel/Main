/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 10:02:31 by jbuan             #+#    #+#             */
/*   Updated: 2021/04/13 18:46:14 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*char	chose(unsigned int i, char c)
{
	if (i >= 0)
		c += 1;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*a;
	int		i;
	int		j;			

	i = ft_strlen(s);
	a = (char *)malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	j = 0;
	while (a[j])
	{
		a[j] = f(j, a[j]);
		j++;
	}
	a[j] = '\0';
	return (a);
}

int	main()
{
	char *s;

	s = "1234";
	char (*f)(unsigned int, char);
	f = &chose;
	printf("%s\n", ft_strmapi(s, (*f)));
}
