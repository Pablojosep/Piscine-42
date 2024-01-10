/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:04:52 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/31 12:24:48 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	count;
	int	i;

	if (nb <= 1)
		return (0);
	i = nb;
	count = 0;
	while (i > 0)
	{
		if (nb % i == 0)
			++count;
		--i;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
printf("\n%d",ft_is_prime(-1));
printf("\n%d",ft_is_prime(1));
printf("\n%d",ft_is_prime(2));
printf("\n%d",ft_is_prime(3));
printf("\n%d",ft_is_prime(4));
printf("\n%d",ft_is_prime(5));
printf("\n%d",ft_is_prime(6));
printf("\n%d",ft_is_prime(1009));
printf("\n%d",ft_is_prime(1901));
}*/
