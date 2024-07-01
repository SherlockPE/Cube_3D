/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:33:16 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/26 11:36:30 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*destiny;
	char	*source;

	destiny = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	while (n--)
		destiny[n] = source[n];
	return (dst);
}

/* int	main(void)
{
	char string1[] = "123456789";
	memcpy(string1[0], string1[5], 5);
	printf("%s\n", string1);
} */
/* void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*destiny;
	char	*source;
	char	temp;

	destiny = (char *)dst;
	source = (char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if (n > 0)
	{
		temp = source[0];
		ft_memmove(dst + 1, src + 1, n - 1);
		destiny[0] = temp;
	}
	return (destiny);
} */