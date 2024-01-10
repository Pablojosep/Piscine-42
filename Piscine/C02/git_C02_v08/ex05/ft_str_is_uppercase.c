/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/17 16:00:50 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	k;
	int	mayuscula;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		k = 0;
		mayuscula = 65;
		while (k < 25)
		{
			if (str[i] == mayuscula)
				++flag;
			++mayuscula;
			++k;
		}
		++i;
	}
	return (ft_define_flag(flag, i));
}
/*
int	main(void)
{
	char  prueba[] = "PABLO@[{`";
	char  prueba2[] = "IGUALAUNO";
	char  prueba3[] = "IGUAL A CERO";
	char  prueba4[] = "";
	int salida;
	salida = ft_str_is_uppercase(prueba);
	printf("%s %d \n", prueba, salida);
	salida = ft_str_is_uppercase(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_uppercase(prueba3);
        printf("%s %d \n", prueba3, salida);
	salida = ft_str_is_uppercase(prueba4);
        printf("%s %d \n", prueba4, salida);
}*/
