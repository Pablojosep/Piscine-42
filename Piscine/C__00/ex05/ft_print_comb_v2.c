/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                   :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:38:56 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/14 09:59:33 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char	numero_uno;
	char	numero_dos;
	char	numero_tres;
	char	comma;
	char	espacio;

	numero_uno = 48;
	numero_dos = 48;
	numero_tres = 48;
	comma = 44;
	espacio = 32;
	while (numero_tres < 58)
	{
		while (numero_dos < 58)
		{
			while (numero_uno < 58)
			{
				write(1, &espacio, 1);
				write(1, &numero_tres, 1);
				write(1, &numero_dos, 1);
				write(1, &numero_uno, 1);
				write(1, &comma, 1);
				++numero_uno;
			}
			++numero_dos;
			numero_uno = 48;
		}
		++numero_tres;
		numero_dos = 48;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
