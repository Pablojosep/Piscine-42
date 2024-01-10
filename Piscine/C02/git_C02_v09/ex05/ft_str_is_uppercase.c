/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/21 14:13:45 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
