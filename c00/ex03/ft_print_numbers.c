/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:41:32 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 21:41:36 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        write(1, &number, 1);
        number++;
    }
}