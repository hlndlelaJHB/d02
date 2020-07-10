/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlndlela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 14:39:01 by hlndlela          #+#    #+#             */
/*   Updated: 2020/07/10 14:39:12 by hlndlela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void) {
	char start;
	char end;
	start = 'a';
	end = 'z';

	while (start <= end) {
		ft_putchar(start);
		start++;
	}
}

