/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlndlela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:45:53 by hlndlela          #+#    #+#             */
/*   Updated: 2020/07/10 14:45:58 by hlndlela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void ft_print_numbers(void) {
	char start;
	char end;
	start = '0';
	end = '9';

	while (start <= end) {
		ft_putchar(start);
		start++;
	}
}

