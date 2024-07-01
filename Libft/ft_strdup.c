/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:07:17 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/27 13:34:00 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*new;

	i = 0;
	size = ft_strlen(s1);
	new = (char *)malloc(size + 1);
	if (!new)
		return (0);
	while (i < size)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* int	main(void)
{
	char	*word;
	char	*ptr;

	word = "12345";
	ptr = ft_strdup(word);
	printf("%s", ptr);
	return (0);
}
 */