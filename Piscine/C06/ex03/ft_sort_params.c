/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 11:06:44 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/31 13:52:48 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_imprimir(char *string)
{
	int	j;

	j = 0;
	while (*string)
	{
		write(1, &string[j], 1);
		++string;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	comp;
	int	i;

	comp = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		++i;
	comp = s1[i] - s2[i];
	return (comp);
}

int	main(int argc, char *argv[])
{
	char	*string_a;
	char	*string_b;
	int		cont;
	char	*store;

	cont = argc - 1;
	while (cont > 1)
	{
		string_a = argv[cont - 1];
		string_b = argv[cont];
		if (ft_strcmp(string_a, string_b) >= 0)
		{
			store = argv[cont];
			argv[cont] = argv[cont - 1];
			argv[cont - 1] = store;
			cont = argc;
		}
		--cont;
	}
	while (cont < argc)
	{
		store = argv[cont];
		ft_imprimir(argv[cont]);
		++cont;
	}
}
