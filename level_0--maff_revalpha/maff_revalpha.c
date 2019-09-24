/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:55:17 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 14:59:31 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int				main(void)
{
	char		chr;

	chr = 'z';
	while (chr >= 'a')
		if ((int)chr % 2 == 0)
			ft_putchar(chr--);
		else
			ft_putchar(chr-- - 32);
	return (0);
}
