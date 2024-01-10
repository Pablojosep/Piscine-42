/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:41:10 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/31 12:22:20 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
	printf("%d\n",ft_recursive_factorial(-20));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(2));
	printf("%d\n",ft_recursive_factorial(12));
	printf("%d\n",ft_recursive_factorial(3));
	printf("%d\n",ft_recursive_factorial(4));
	printf("%d\n",ft_recursive_factorial(5));
	printf("%d\n",ft_recursive_factorial(6));
	printf("%d\n",ft_recursive_factorial(7));
	printf("%d\n",ft_recursive_factorial(9));
	printf("%d\n",ft_recursive_factorial(10));
	printf("%d\n",ft_recursive_factorial(11));
}*/