/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:24:20 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/27 13:38:59 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*nedl;
	char	*paj;

	nedl = (char *)needle;
	paj = (char *)haystack;
	i = 0;
	if (nedl[0] == '\0')
		return ((char *)paj);
	while (paj[i] && len > i)
	{
		j = 0;
		while ((paj[i + j] == nedl[j]) && (len > i + j) && paj[i + j])
		{
			j++;
		}
		if (nedl[j] == '\0')
			return ((char *)paj + i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	const char	*pajar;
	const char	*aguja;
	char		*ptr;

	// char *pajar = "qwerty qwerty qwerty qwerty asdf qwerty qwerty";
	aguja = "abc";
	pajar = "123456abcdefghijklmnop";
	ptr = ft_strnstr(pajar, aguja, 9);// asdf qwerty qwerty
	printf("%s", ptr);
	return (0);
}
 */