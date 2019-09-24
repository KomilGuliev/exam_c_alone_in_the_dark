/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:42:26 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 14:46:45 by dcapers          ###   ########.fr       */
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
		while (*av[1] != '\0')
			ft_putchar(*av[1]++);
	ft_putchar('\n');
	return (0);
}
