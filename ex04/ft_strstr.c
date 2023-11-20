/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	while (str[k])
	{
		while (str[i] && str[i] != to_find[j])
		{
			i++;
		}
		j = 0;
		while (to_find[j] && to_find[j] == str[i + j])
			j++;
		if (!to_find[j])
		{
			return (str + i);
		}
		j = 0;
		k++;
	}
}

/*int	main(int n, char *args[])
{
	int		p;
	char	*str;
	char	*to_find;

	if (n != 3)
		return (0);
	str = args[1];
	to_find = args[2];
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
