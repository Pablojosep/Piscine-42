/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:08:41 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/21 21:58:09 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		++dest;
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	int resultado;
	int resultado2;
	
	char fuente[]=" fuente muy chevere";
	char destino[]="destino";
	char fuente2[]=" fuente muy chevere";
	char destino2[]="destino";
	

	resultado=*ft_strcat(destino,fuente);
	printf("\n%s\n",destino);
		
	resultado2=*strcat(destino2,fuente2);
	printf("\n%s\n",destino2);
	
}*/