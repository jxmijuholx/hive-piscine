/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:17:19 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 23:17:23 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nb)
{
    long    long_nb;
    char    storage[10];
    short   i;

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
    i--;
    while (i >= 0)
    {
        write(1, &storage[i], 1);
        i--;
    }
}
/*
int main(void) {
    int numbers[] = {0, 12345, -6789, 2147483647, -2147483648};
    int num_count = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < num_count; i++) {
        ft_putnbr(numbers[i]);
        write(1, "\n", 1);
    }

    return 0;
}
*/