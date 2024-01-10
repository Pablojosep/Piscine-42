/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:01:36 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/14 08:42:13 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1);
		i = i + 1;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
