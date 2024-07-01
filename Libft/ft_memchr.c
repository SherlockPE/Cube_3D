/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:23:00 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/27 15:43:40 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)s;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
			return (&string[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char *string = "Hola que .tal cómo estás?";
	char needle = '.';
	void *ptr;

	ptr = ft_memchr(string, needle, 28);
	printf("La string empezará desde: %s", ptr);
		// La string empezará desde: .tal cómo estás?%

	return (0);
} */