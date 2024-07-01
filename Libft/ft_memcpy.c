/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:48:35 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/25 17:25:38 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*destiny;
	char	*source;

	destiny = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
}

/* int	main(void)
{
	char string1[] = "123456789";
	// char	string2[] = "123456789098";

	memcpy(string1[0], string1[5], 5);
	printf("%s\n", string1);
} */