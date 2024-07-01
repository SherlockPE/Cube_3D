/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:10:06 by flopez-r          #+#    #+#             */
/*   Updated: 2023/09/17 18:38:17 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
	{
		return (arg + 32);
	}
	else
		return (arg);
}

/* #include <stdio.h>
int	main(void)
{
	char c, result;

	c = 'M';
	result = ft_tolower(c);
	printf("ft_tolower(%c) = %c\n", c, result);

	c = 'm';
	result = ft_tolower(c);
	printf("ft_tolower(%c) = %c\n", c, result);

	c = '+';
	result = ft_tolower(c);
	printf("ft_tolower(%c) = %c\n", c, result);

	return (0);
} */