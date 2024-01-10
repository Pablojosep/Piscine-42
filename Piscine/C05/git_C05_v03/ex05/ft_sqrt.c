/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:52:50 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/30 16:04:08 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int long	operator;

	operator = 0;
	while (operator * operator < nb)
		++operator;
	if (operator * operator == nb)
		return (operator);
	return (0);
}
/*

int main(void)
{
printf("\n%d",ft_sqrt(1));
printf("\n%d",ft_sqrt(2));
printf("\n%d",ft_sqrt(9));
printf("\n%d",ft_sqrt(10));
printf("\n%d",ft_sqrt(16));
printf("\n%d",ft_sqrt(20));
printf("\n%d",ft_sqrt(25));
}*/
