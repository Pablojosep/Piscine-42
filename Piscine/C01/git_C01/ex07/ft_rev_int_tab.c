/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:29:49 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/16 18:40:30 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer;
	int	i;

	i = 0;
	while (i < size)
	{
		&buffer[size - i - 1] = tab[i];
		++i;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = &buffer[i];
		++i;
	}
}

int	main(void)
{
	int  vector[] = {10,15,20,25,30,35};
	int  tamano = 6;
	int n=0;
	ft_rev_int_tab(vector,tamano);
	
	while ( n < tamano)
       	{
 		printf("%d\n", vector[n]);
		++n;
	}
}
