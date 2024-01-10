/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:16:22 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/31 12:27:27 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	if (nb <= 1)
		return (0);
	count = 0;
	i = nb;
	while (i > 0)
	{
		if (nb % i == 0)
			++count;
		--i;
	}
	if (count == 2)
		return (nb);
	return (ft_find_next_prime(++nb));
}
/*
int main(void)
{
printf("%d\n",ft_find_next_prime(-2));
printf("%d\n",ft_find_next_prime(-1));
printf("%d\n",ft_find_next_prime(0));
printf("%d\n",ft_find_next_prime(1));
printf("%d\n",ft_find_next_prime(2));
printf("%d\n",ft_find_next_prime(3));
printf("%d\n",ft_find_next_prime(4));
printf("%d\n",ft_find_next_prime(5));
printf("%d\n",ft_find_next_prime(50));
printf("%d\n",ft_find_next_prime(55));
printf("%d\n",ft_find_next_prime(500));
printf("%d\n",ft_find_next_prime(1000));
printf("%d\n",ft_find_next_prime(53000000));





}*/