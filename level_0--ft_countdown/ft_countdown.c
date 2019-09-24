/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:26:28 by dcapers           #+#    #+#             */
/*   Updated: 2019/09/24 14:14:22 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		i;

	i = 9;
	while (i)
	{
		ft_putchar(i + '0');
		i--;
	}
	ft_putchar('\n');
	return (0);
}
