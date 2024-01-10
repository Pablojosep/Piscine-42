/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:46:46 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/30 14:55:49 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0) 
	{
		result = result * nb;
		--power;
	}
	return (result);
}
/*
int main(void)
{
printf("%d",ft_iterative_power(2,3));
printf("\n%d",ft_iterative_power(0,0));
printf("\n%d",ft_iterative_power(2,-5));
printf("\n%d",ft_iterative_power(3,3));

}*/
