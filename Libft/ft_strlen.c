/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flopez-r <flopez-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:43:10 by flopez-r          #+#    #+#             */
/*   Updated: 2024/07/01 12:12:20 by flopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
//     char *letras;
//     letras = "No debes movertee de doonde estáss y
// como peter panda has, *aplaude 2 veces*";
//     printf("La oración %s tiene %d caracteres\n", letras, ft_strlen(letras));

//     letras = "Doos de laaado coomo un cangrejo";
//     printf("La oración %s tiene %d caracteres\n", letras, ft_strlen(letras));

//     letras = "tres al frente y una atrás";
//     printf("La oración %s tiene %d caracteres\n", letras, ft_strlen(letras));

//     letras = "Y A LA TORTUGA HAY QUE VOLTEAR";
//     printf("La oración %s tiene %d caracteres\n", letras, ft_strlen(letras));
//     letras = "1234567890";
//     printf("La oración %s tiene %d caracteres\n", letras, ft_strlen(letras));
//     return (0);
// }
