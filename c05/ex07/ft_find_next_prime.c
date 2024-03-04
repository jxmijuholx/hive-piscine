/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:01:55 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 16:06:01 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_prime(int nb)
{
    int     i;

    i = 2;
    if ( nb <= 1 )
    {
        return (0);
    }
    while ( i <= nb / 2 )
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int     ft_find_next_prime (int nb)
{
    if (nb <= 1)
    {
        return (0);
    }
    if (ft_is_prime(nb))
    {
        return (nb);
    }
    ft_find_next_prime(nb + 1);
}