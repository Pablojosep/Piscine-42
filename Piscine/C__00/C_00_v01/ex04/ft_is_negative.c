/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:38:56 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/13 20:59:33 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	i;

	if (n >= 0)
	{
		i = 80;
		write(1, &i, 1);
	}
	else
	{
		i = 78;
		write(1, &i, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(-10);
	return (0);
}*/
