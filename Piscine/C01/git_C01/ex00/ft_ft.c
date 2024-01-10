/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 08:43:31 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/15 09:54:16 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	int	cuarenta_dos;

	cuarenta_dos = 42;
	*nbr = cuarenta_dos;
}
/*int	main(void)
{
	int	numero;

	numero = 10;
	ft_ft(&numero);
	printf("%d", numero);
	return (0);
}*/
