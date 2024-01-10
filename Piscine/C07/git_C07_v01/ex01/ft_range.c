/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:33:29 by ppenuela          #+#    #+#             */
/*   Updated: 2024/01/02 13:19:03 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		++i;
	}
	return (array);
}
/*
int	main(void)
{
	int i= 0;
	int *nuevo;
	nuevo = ft_range(1,20);
	while (nuevo[i] != '\0')
	{
		printf("%d,",nuevo[i]);
		++i;
	}
}*/
