/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:40:11 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/21 14:12:57 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			++flag;
		++i;
	}
	if (flag == i)
		return (1);
	else
		return (0);
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
