/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (!s2[i])
		return (0);
	return (0 - s2[i - 1]);
}

/*int	main(int n, char *args[])
{
	int		p;
	char	*s1;
	char	*s2;

	if (n != 3)
		return (0);
	s1 = args[1];
	s2 = args[2];
	p = ft_strcmp(s1, s2);
	printf("%d", p);
	printf("\n%d", strcmp(s1, s2));
	return (0);
}*/
