/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:15:06 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/26 14:19:56 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)&(s[size]));
	while (size--)
	{
		if (s[size] == (unsigned char)c)
			return ((char *)&s[size]);
	}
	return (0);
}
/* 
int main () {
	const char str[] = "Hola jaja";
	const char ch = 'j';
	char *p;
	p = strrchr(str, ch);

	printf("String starting from '%c' is: %s", ch, p);
	return (0);
}
 */