/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:21:59 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/30 15:52:11 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(void)
{
printf("\n%d",ft_fibonacci(0));
printf("\n%d",ft_fibonacci(1));
printf("\n%d",ft_fibonacci(2));
printf("\n%d",ft_fibonacci(3));
printf("\n%d",ft_fibonacci(4));
}*/
