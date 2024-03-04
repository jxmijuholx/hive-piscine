/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:40:08 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 21:40:20 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}
/*
int main(void)
{
    ft_print_alphabet();
    return 0;
}
*/