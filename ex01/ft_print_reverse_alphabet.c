/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlndlela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:44:11 by hlndlela          #+#    #+#             */
/*   Updated: 2020/07/14 11:13:34 by hlndlela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void) {
	char start;
	char end;
	start = 'z';
	end = 'a';
	while	(start >= end) {
		ft_putchar(start);
		start--;
	}
}
