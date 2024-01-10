/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:37:44 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/29 12:48:34 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	print_neg(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		return (nb);
	}
	return (nb);
}

void	print_ft(int i, int nb, char *impresion)
{
	int	count;

	count = 0;
	while (count <= i && nb != 0)
	{
		write(1, &impresion[i - count], 1);
		++count;
	}
}

void	ft_calculate(int almacen, int nb, int cociente)
{
	int		i;
	int		buffer;
	char	impresion[20];

	i = 0;
	while (almacen != 0 && nb != 0)
	{
		impresion[i] = cociente + 48;
		buffer = almacen;
		almacen = almacen / 10;
		cociente = buffer % 10;
		++i;
	}
	if (nb < 10 && nb > 0)
		impresion[i] = nb + 48;
	else
		impresion[i] = buffer + 48;
	print_ft(i, nb, impresion);
}

void	ft_putnbr(int nb)
{
	int		cociente;
	int		almacen;
	int		i;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		nb = print_neg(nb);
		if (nb == 0)
			write(1, "0", 1);
		i = 0;
		almacen = nb / 10;
		cociente = nb % 10;
		ft_calculate(almacen, nb, cociente);
	}
}
/*
int	main(void)
{
	ft_putnbr(-1555474);
}*/
