/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:53:50 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/30 13:15:38 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

/* char	prueba(unsigned int n, char c)
{
	(void) n;
	c = '-';
	return (c);
}
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				size;
	unsigned int	i;
	char			*new;

	size = ft_strlen(s);
	new = ft_calloc(size + 1, sizeof(char));
	if (new == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
/*
int	main(void)
{
	char	*string;
	char	*new_string;

	string = "HOLAAA que TAL";
	new_string = ft_strmapi(string, &prueba);
	printf("%s\n", new_string);
	free(new_string);
	return (0);
}

 */