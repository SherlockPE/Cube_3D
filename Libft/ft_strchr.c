/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:17:49 by flopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 12:12:54 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] != (unsigned char)c)
		return (0);
	return ((char *)&s[i]);
}

/* int	main(void)
{
	const char	str[];
	const char	ch;
	char		*p;

	str[] = "This is just a String";
	ch = 'j';
	p = ft_strchr(str, ch);
	printf("String starting from '%c' is: %s", ch, p);
	return (0);
}
 */