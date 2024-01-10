/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:56:23 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/31 17:03:09 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
printf("\n%d",ft_recursive_power(759,-3507));
printf("\n%d",ft_recursive_power(0,0));
printf("\n%d",ft_recursive_power(-3647,0));
printf("\n%d",ft_recursive_power(-3148,1));
printf("\n%d",ft_recursive_power(0,4));
printf("\n%d",ft_recursive_power(1,5));
printf("\n%d",ft_recursive_power(-1,100));
printf("\n%d",ft_recursive_power(-10,5));
printf("\n%d",ft_recursive_power(-2,3));
printf("\n%d",ft_recursive_power(-8,3));


}*/