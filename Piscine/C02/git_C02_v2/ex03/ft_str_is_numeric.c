/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:40:11 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/17 15:52:11 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_define_flag(int bandera, int contador)
{
	if (bandera == contador)
		bandera = 1;
	else
		bandera = 0;
	if (contador == 0)
		bandera = 1;
	return (bandera);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	k;
	int	numeros;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		k = 0;
		numeros = 48;
		while (k < 10)
		{
			if (str[i] == numeros)
				++flag;
			++numeros;
			++k;
		}
		++i;
	}
	return (ft_define_flag(flag, i));
}
/*
int	main(void)
{
	char  prueba[] = "1234569";
	char  prueba2[] = "123 abc";
	char  prueba3[] = "0123456789";
	char  prueba4[] = "";
	int salida;
	salida = ft_str_is_numeric(prueba);
	printf("%s %d \n", prueba, salida);
	salida = ft_str_is_numeric(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_numeric(prueba3);
        printf("%s %d \n", prueba3, salida);
	salida = ft_str_is_numeric(prueba4);
        printf("%s %d \n", prueba4, salida);
}*/
