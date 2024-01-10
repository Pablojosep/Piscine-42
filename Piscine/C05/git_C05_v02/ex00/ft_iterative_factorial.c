/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:27:47 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/31 12:29:33 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		--nb;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n",ft_iterative_factorial(-20));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(2));
	printf("%d\n",ft_iterative_factorial(12));
	printf("%d\n",ft_iterative_factorial(3));
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(5));
	printf("%d\n",ft_iterative_factorial(6));
	printf("%d\n",ft_iterative_factorial(7));
	printf("%d\n",ft_iterative_factorial(9));
	printf("%d\n",ft_iterative_factorial(10));
	printf("%d\n",ft_iterative_factorial(11));

}*/
