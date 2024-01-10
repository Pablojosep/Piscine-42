/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:48:10 by ppenuela          #+#    #+#             */
/*   Updated: 2024/01/02 10:31:32 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i] != '\0')
		++i;
	copy = (char *) malloc(sizeof(char) * i);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		++i;
	}
	return (copy);
}
/*
int	main(void)
{
	char cadena[] = "de aqui se copia el mensaje";
	printf("%s",ft_strdup(cadena));
}*/
