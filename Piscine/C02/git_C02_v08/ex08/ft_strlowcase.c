/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:41:53 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/17 16:44:52 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		++i;
	}
	return (str);
}
/*
int	main(void)
{
	char  prueba[] = "PAblO@[{`";
	//char  prueba2[] = "igualauno";
	//char  prueba3[] = "igual a cero";
	//char  prueba4[] = "";
	int salida;
	
	printf("%s \n",prueba);
        salida=*ft_strlowcase(prueba);
        printf("%s",prueba);
}*/
