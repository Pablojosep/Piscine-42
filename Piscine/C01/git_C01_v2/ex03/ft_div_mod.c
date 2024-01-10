/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 09:51:55 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/16 09:52:55 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int 	divisor;
	int	dividendo;
	int	cociente;
	int	resto;


	divisor = 4;
	dividendo = 2;

	ft_div_mod(dividendo, divisor, &cociente, &resto);
	printf("%d",cociente);
	printf(" ");
	printf("%d",resto);

}*/
