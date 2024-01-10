/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:40:48 by ppenuela          #+#    #+#             */
/*   Updated: 2024/01/02 19:30:49 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strleng(char **strs, int size)
{
	int	i;
	int	cont;
	int	j;

	cont = 0;
	i = 1;
	while (i < size + 1)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			++cont;
			++j;
		}
		++i;
	}
	return (cont);
}

char	ft_join(char *unir, char **strs, int size, char *sep)
{
	int	j;
	int	i;
	int	cont;

	i = 1;
	cont = 0;
	while (i <= size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			unir[cont++] = strs[i][j++];
		j = 0;
		if (i == size)
			break ;
		while (sep[j] != '\0')
			unir[cont++] = sep[j++];
		++i;
	}
	return (*unir);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*unir;
	int		cont;
	int		i;

	if (size == 0)
		return (NULL);
	cont = ft_strleng(strs, size);
	i = 0;
	while (sep[i] != '\0')
	{
		++i;
	}
	unir = malloc(sizeof(char) * (cont + (i * (size - 1))));
	ft_join(unir, strs, size, sep);
	return (unir);
}
/*
int main(int argc, char *argv[])
{
char separador[] = ",xxx,";
char *resultado;
printf("argc: %d\n",argc);
int tamano = argc -1;

resultado = ft_strjoin(tamano, argv, separador);

printf("%s",resultado);	
}*/