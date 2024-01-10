/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:59:27 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/16 17:06:15 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int a, int b)
{
	int	j;
	int	k;

	k = 1;
	j = 1;
	while (j <= b && k <= a)
	{
		if (j == 1 && k == 1)
			ft_putchar('/');
		if (j == 1 && k > 1 && k < a)
			ft_putchar('*');
		if (k == a && j == 1 && a != 1)
			ft_putchar(92);
		if (j > 1 && j < b)
		{
			if (k == 1 || k == a)
				ft_putchar('*');
			else if (k < a && k > 1)
				ft_putchar(32);
		}
		if (j == b && k == a && j != 1 && k != 1)
			ft_putchar('/');
		if (j == b && k > 1 && k < a && j != 1)
			ft_putchar('*');
		if (j == b && k == 1 && b != 1)
			ft_putchar(92);
		++k;
		ft_putchar(k);
		if (k > a)
		{
			ft_putchar('\n');
			++j;
			ft_putchar(j);
			k = 0;
		}
	}
}

int	main(void)
{
	rush(4, 3);
	return (0);
}
