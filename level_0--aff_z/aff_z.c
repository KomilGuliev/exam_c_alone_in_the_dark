/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:03:50 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 15:07:58 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] != 'z' && *av[1] != '\0')
			av[1]++;
		if (*av[1] == 'z')
			ft_putchar(*av[1]);
	}
	else
		ft_putchar('z');
	ft_putchar('\n');
	return (0);
}
