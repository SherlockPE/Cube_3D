/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:16:07 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/16 19:17:25 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[];

	dest[] = "Hola que tal?";
	ft_bzero(dest, 5);
	printf("%s", dest);
	return (0);
}
 */