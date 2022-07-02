/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpadovan <jpadovan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:29:26 by jpadovan          #+#    #+#             */
/*   Updated: 2022/07/02 22:43:40 by jpadovan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

void	print_if_line_zero(int column, int max)
{
	if (column == 0 || column == max - 1)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	print_if_line_nonzero(int column, int max)
{
	if (column == 0 || column == max - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		line;
	int		column;

	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			if (line == 0 || line == y - 1)
				print_if_line_zero(column, x);
			else
				print_if_line_nonzero(column, x);
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
