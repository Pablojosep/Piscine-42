/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/18 09:41:20 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	k;
	int	printable;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		k = 0;
		printable = 33;
		while (k < 94)
		{
			if (str[i] == printable)
				++flag;
			++printable;
			++k;
		}
		++i;
	}
	return (ft_define_flag(flag, i));
}
/*
int	main(void)
{
	char  prueba[] = {32};
	char  prueba2[] = "IGUALAUNO";
	char  prueba3[] = "IGUAL A CERO";
	char  prueba4[] = "";
	int salida;
	salida = ft_str_is_printable(prueba);
	printf("%s %d \n", prueba, salida);
	salida = ft_str_is_printable(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_printable(prueba3);
        printf("%s %d \n", prueba3, salida);
	salida = ft_str_is_printable(prueba4);
        printf("%s %d \n", prueba4, salida);
}*/
