/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:36:09 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/18 09:42:24 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main(void)
{
	char Cadena[]="mensa";
	char destino[]="*******";
	
	int k;

	char resultado;

	resultado=*ft_strcpy(destino,Cadena);

	k=0;
	while(k<7)
	{
        printf("%c\n",destino[k]);
	++k;
	}
   	printf("\n%s",destino); 
}*/
