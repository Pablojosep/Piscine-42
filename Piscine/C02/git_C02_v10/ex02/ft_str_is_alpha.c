/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/21 14:10:10 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			++flag;
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
	char  prueba[] = "pablo@[{`";
	char  prueba2[] = "zaqwsxcderfvbgtyhnmjuiklop";
	char  prueba3[] = "igual a cero";
	char  prueba4[] = "";
	int salida;
	salida = ft_str_is_alpha(prueba);
	printf("%s %d \n", prueba, salida);
	salida = ft_str_is_alpha(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_alpha(prueba3);
    printf("%s %d \n", prueba3, salida);
	salida = ft_str_is_alpha(prueba4);
    printf("%s %d \n", prueba4, salida);
}*/
