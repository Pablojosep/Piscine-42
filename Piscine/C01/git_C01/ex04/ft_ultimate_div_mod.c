/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 09:53:54 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/17 11:26:04 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	intercambio;

	intercambio = *a;
	*a = *a / *b;
	*b = intercambio % *b;
}

/*int	main(void)
{
	int divisor = 2;
	int dividendo = 4;

	ft_ultimate_div_mod(&dividendo,&divisor);
	printf("%d",dividendo);
	printf(" ");
	printf("%d",divisor);
}*/
