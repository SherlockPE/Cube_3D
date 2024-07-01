/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:38:55 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/16 13:18:57 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b2;

	b2 = (unsigned char *)b;
	i = 0;
	while (i < len)
		b2[i++] = c;
	return (b2);
}

/* #include <stdio.h>

int	main(void)
{
	char	dest[] = "Hola como estás?";
	char	c;

	c = 'F';
	ft_memset(dest, c, 5);
	printf("%s", dest);
	return (0);
}
 */