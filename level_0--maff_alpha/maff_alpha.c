/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:33:15 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 14:38:31 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int				main(void)
{
	char	chr;

	chr = 'a';
	while (chr <= 'z')
		if ((int)chr % 2 == 1)
			ft_putchar(chr++);
		else
			ft_putchar(chr++ - 32);
	ft_putchar('\n');
	return (0);
}
