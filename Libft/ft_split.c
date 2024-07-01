/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:52:46 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/10/05 15:43:03 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	n_words(char *s, int c)
{
	int	i;
	int	cant_w;

	i = 0;
	cant_w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || s[i] == 0)
				cant_w++;
		}
	}
	return (cant_w);
}

static void	*free_split(char **array, int max)
{
	int	index;

	index = 0;
	while (index < max)
	{
		free(array[index]);
		index++;
	}
	free(array);
	return (NULL);
}

static char	**fill(char *s, char c, char **array)
{
	int	i;
	int	start;
	int	memory;

	i = 0;
	memory = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || s[i] == 0)
			{
				array[memory] = ft_substr(s, start, i - start);
				if (!array[memory])
					return (free_split(array, memory));
				memory++;
			}
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		cant_words;
	char	**array;

	cant_words = n_words((char *)s, c);
	array = (char **)ft_calloc((cant_words + 1) * 8, 1);
	if (!array)
		return (0);
	array = fill((char *)s, c, array);
	return (array);
}
/*
int	main(void)
{
	ft_split(",,h,ola,,,,q,ue,ta,l", ',');
} */