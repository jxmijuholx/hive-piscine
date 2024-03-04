/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:40:44 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 21:40:59 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    char    letter;

    letter = 'z';
    while (letter >= 'a')
    {
        write(1, &letter, 1);
        letter--;
    }
}
/*
int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
*/