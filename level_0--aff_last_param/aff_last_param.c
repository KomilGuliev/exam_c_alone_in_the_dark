/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:47:59 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 14:52:46 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int				main(int ac, char **av)
{
	if (ac > 1)
		while (*av[ac - 1] != '\0')
			ft_putchar(*av[ac - 1]++);
	ft_putchar('\n');
	return (0);
}
