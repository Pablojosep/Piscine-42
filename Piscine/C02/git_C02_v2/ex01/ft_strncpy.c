/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:36:09 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/18 13:11:32 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
/*
int	main(void)
{
	char Cadena[]="mensa";
	char destino[]="*******";
	unsigned int tamano = 5;
	int k;

	char resultado;

	resultado=*ft_strncpy(destino,Cadena,tamano);

	k=0;
	while(k<7)
	{
        printf("%c\n",destino[k]);
	++k;
	}
 	printf("\n%s",destino);
	printf("\n%p",&destino);
     	printf("\n%p",&resultado);	
}*/
