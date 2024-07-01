/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:51:51 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/30 18:43:34 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*new;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	size = ft_strlen(s1);
	while (size && ft_strchr(set, s1[size]))
		size--;
	new = ft_substr(s1, i, size - i + 1);
	return (new);
}
/* int	main(void)
{
	char	*string1;
	char	*new;
	char	*s1;
	char	*set;

	s1 = "aoiueTUTaeuia";
	set = "aeiou";
	new = ft_strtrim(s1, set);
	printf("%s", new); // TUT
	free(new);
} */