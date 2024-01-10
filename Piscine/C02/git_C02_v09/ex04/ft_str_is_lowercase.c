/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:47:58 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/21 14:13:15 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
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
