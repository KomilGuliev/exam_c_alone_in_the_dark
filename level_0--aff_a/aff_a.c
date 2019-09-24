/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:20:03 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 11:24:46 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	size_t	i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != 'a' && av[1][i] != '\0')
			i++;
		if (av[1][i] == 'a')
			ft_putchar('a');
	}
	else
		ft_putchar('a');
	ft_putchar('\n');
	return (0);
}
