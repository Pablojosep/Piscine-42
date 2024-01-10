/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:49:20 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/22 09:47:54 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				comp;

	comp = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		++i;
	comp = s1[i] - s2[i];
	return (comp);
}
/*
int	main(void)
{
	int resultado;
	unsigned int b = 5;
	char esse1[]="pablo";
	char esse2[]="pabl";
	resultado = ft_strncmp(esse1,esse2,b);
	printf("\n resultado :%d\n",resultado);
	resultado = strncmp(esse1,esse2,b);
	printf("\n resultado :%d\n",resultado);
}*/
