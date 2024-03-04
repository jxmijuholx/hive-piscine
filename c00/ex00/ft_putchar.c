/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:38:57 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/03/03 14:40:28 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
/*
    int main(void)
{
    char    letter;
    letter = 'c';
    ft_putchar(letter);
    return 0;
}
*/