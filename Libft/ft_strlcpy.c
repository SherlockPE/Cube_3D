/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:57:30 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/26 13:54:08 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t des)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	if (des == 0)
		return (j);
	while (src[i] && i < (des - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/* 
#include <stdio.h>

int	main(void)
{
	char *source = "Hola mundo!";
	char dest[11];

	ft_strlcpy(dest, source, 6);

	printf("%s", dest);
	return (0);
} */