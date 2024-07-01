/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:05:38 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/18 14:46:42 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	i = 0;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (n--)
	{
		if (string1[i] == string2[i])
			i++;
		else
			return (string1[i] - string2[i]);
	}
	return (0);
}

/* int main(void)
{
	char	*st_1;
	char	*st_2;
	int		resultado;

	st_1 = "Hello there";
	st_2 = "Hello guys!";
	resultado = ft_memcmp(st_1, st_2, 6);
	if (resultado == 0)
		printf("Las cadenas son iguales: %d", resultado);
	else
		printf("Las cadenas no son iguales: %d", resultado);
	return (0);
}
 */