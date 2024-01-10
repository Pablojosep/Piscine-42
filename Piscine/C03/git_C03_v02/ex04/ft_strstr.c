/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppenuela <ppenuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:50:21 by ppenuela          #+#    #+#             */
/*   Updated: 2023/12/23 10:37:27 by ppenuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[i] != '\0')
		i++;
	while (str[j] != '\0')
		++j;
	while (k < j && l < i)
	{
		if (str[k] == to_find[l])
			++l;
		++k;
	}
	if (l == i)
		return (str + k - i);
	else
		return (0);
}
/*
int	main(void)
{
	int s;
	s = 0;
	char aguja[] = "ring";
	char pajal[] = "string con palabras";
	while (s<19)
	{
		printf("\n%p",&pajal[s]);
		s++;
	}
	printf("\nresultado %p",ft_strstr(pajal,aguja));
	printf("\nresultado %p",strstr(pajal,aguja));
}*/