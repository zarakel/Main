/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:29:24 by jbuan             #+#    #+#             */
/*   Updated: 2021/03/23 11:39:28 by jbuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	char *ptr;
	unsigned int i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '0';
		i++;
	}
}

int main()
{
	char str[] = "Bonjour";
	ft_bzero(str, 2);
	printf("%s", str);
}
