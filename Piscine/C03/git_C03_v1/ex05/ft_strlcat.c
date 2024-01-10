/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:36:59 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/22 09:43:19 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	k;

	dest_size = 0;
	src_size = 0;
	k = 0;
	while (dest[dest_size] != '\0')
		++dest_size;
	while (src[src_size] != '\0')
		++src_size;
	while (dest_size + k < size && src[k] != '0')
	{
		dest[dest_size + k] = src[k];
		++k;
	}
	dest[dest_size + k - 1] = '\0';
	return (dest_size + src_size); 
}
/*
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char fuente[]="y este es el fin";   //16
	char destino[30]="este es el inicio "; //10
	char fuente2[]="y este es el fin";
	char destino2[30]="este es el inicio ";

	unsigned int d;
	unsigned int e;
	unsigned int tamano=40;

	d=ft_strlcat(destino,fuente,tamano);
	printf("%d\n",d);
	printf("\n%s\n",destino);

	e=strlcat(destino2,fuente2,tamano);
	printf("\n%d\n",e);
	printf("\n%s\n",destino2);
}*/