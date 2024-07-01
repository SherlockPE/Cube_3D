/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:15:27 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/26 16:26:54 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_src;
	size_t	size_dst;
	size_t	i;
	size_t	j;

	size_src = 0;
	size_dst = 0;
	while (src[size_src])
		size_src++;
	while (dst[size_dst])
		size_dst++;
	i = size_dst;
	j = 0;
	if (size_dst >= dstsize || dstsize == 0)
		return (size_src + dstsize);
	while (src[j] && j < dstsize - size_dst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dst + size_src);
}
