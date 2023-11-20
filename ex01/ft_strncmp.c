/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rotalvar <rotalvar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:56:59 by rotalvar          #+#    #+#             */
/*   Updated: 2023/11/20 16:57:01 by rotalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	if (!s2[i])
		return (0);
	return (0 - s2[i - 1]);
}

/*int	main(int n, char *args[])
{
	int		p;
	char	*s1;
	char	*s2;
	int		size;

	if (n != 4)
		return (0);
	s1 = args[1];
	s2 = args[2];
	size = *args[3] - 48;
	p = ft_strncmp(s1, s2, size);
	printf("%d size %d", p, size);
	printf("\n%d", strncmp(s1, s2, size));
	return (0);
}*/
