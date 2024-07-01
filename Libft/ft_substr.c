/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:46:56 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/29 13:24:45 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_string;
	size_t		i;

	if (s == 0)
		return (0);
	i = ft_strlen(s);
	if (start >= i)
	{
		new_string = ft_calloc(1, 1);
		return (new_string);
	}
	else if (i - start < len)
		new_string = ft_calloc((i - start) + 1, 1);
	else
		new_string = ft_calloc(len + 1, 1);
	if (new_string == 0)
		return (0);
	i = 0;
	while (i < len && s[start])
		new_string[i++] = s[start++];
	return (new_string);
}

/* int	main(void)
{
	char	*string;
	char	*new;

	string = "SUPERNATURAL";
	new = ft_substr(string, 5, 7);
	printf("Original: %s\n", string);
	printf("New starting from byte 5 and 7 bytes of size: %s", new);
	free(new);
} */