/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:47:58 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/17 15:56:25 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	k;
	int	minuscula;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		k = 0;
		minuscula = 97;
		while (k < 25)
		{
			if (str[i] == minuscula)
				++flag;
			++minuscula;
			++k;
		}
		++i;
	}
	return (ft_define_flag(flag, i));
}
/*
int	main(void)
{
	char  prueba[] = "pablo@[{`";
	char  prueba2[] = "igualauno";
	char  prueba3[] = "igual a cero";
	char  prueba4[] = "";
	int salida;
	salida = ft_str_is_lowercase(prueba);
	printf("%s %d \n", prueba, salida);
	salida = ft_str_is_lowercase(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_lowercase(prueba3);
        printf("%s %d \n", prueba3, salida);
	salida = ft_str_is_lowercase(prueba4);
        printf("%s %d \n", prueba4, salida);
}*/
