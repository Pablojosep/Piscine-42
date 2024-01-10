/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:47:41 by ppenuela          #+#    #+#             */
/*   Updated: 2024/01/02 19:32:42 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	if (max <= min)
		return (0);
	buffer = malloc(sizeof(int) * (max - min));
	if (buffer == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		buffer[i] = min + i;
		++i;
	}
	*range = buffer;
	return (max - min);
}
/*
int	main(void)
{
	int **prueba;
	int tamano;
	int j;
	prueba = malloc(sizeof(int *));
	j = 0;
	tamano = ft_ultimate_range(prueba, -5, 5);
	while(j < tamano)
	{
		printf("%d\n",prueba[0][j]);
		++j;
	}
	
}*/