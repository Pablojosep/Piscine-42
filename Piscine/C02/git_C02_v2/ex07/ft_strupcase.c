/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/17 16:40:56 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		++i;
	}
	return (str);
}
/*
int	main(void)
{
	char  prueba[] = "pablo@[{`";
	//char  prueba2[] = "igualauno";
	//char  prueba3[] = "igual a cero";
	//char  prueba4[] = "";
	int salida;
	
	printf("%s \n",prueba);
	salida=*ft_strupcase(prueba);
	printf("%s",prueba);
	//salida = ft_str_is_alpha(prueba2);
	printf("%s %d \n", prueba2, salida);
	salida = ft_str_is_alpha(prueba3);
        printf("%s %d \n", prueba3, salida);
	salida = ft_str_is_alpha(prueba4);
        printf("%s %d \n", prueba4, salida);
}*/
