/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:54:29 by fabriciolop       #+#    #+#             */
/*   Updated: 2023/09/30 13:44:05 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* void	prueba(unsigned int n, char *c)
{
	(void) n;
	printf("String -->%s\nPosition --> %d\n\n", c, n);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
int	main()
{
	char	string[] = "holaaaa QUE TAL";
	ft_striteri(string, &prueba);
} */