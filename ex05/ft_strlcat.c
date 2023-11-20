/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
//en este caso size representa el tamaño maximo del buffer de salida

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = len(dest);
	size = size -1;
	if (j >= size)
		return (j);
	while (src[i] && (j + i) < size)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (j + i);
}

/*int	main(int n, char *args[])
{
	int		p;
	int		size;
	char	*dest;
	char	*src;

	if (n != 4)
		return (0);
	dest = args[1];
	src = args[2];
	size = *args[3];
	ft_strlcat(dest, src, size - 48);
	printf("%s", dest);
	return (0);
}*/
