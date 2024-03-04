/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:43:58 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 22:04:00 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    long   long_nb;
    char   storage[10];
    short  i;

    long_nb = nb;
    i = 0;
    if (nb == 0)
    {
        write(1, "0", 1);
        return ;
    }
    if (nb < 0)
    {
        long_nb *= -1;
        write(1, "-", 1);
    }
    while (long_nb)
    {
        storage[i] = (long_nb % 10) + '0';
        i++;
        long_nb /= 10;
    }
    while (i >= 0)
    {
        write(1, &storage[i], 1);
        i--;
    }
}