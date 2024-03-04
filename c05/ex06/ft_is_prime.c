/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:41:09 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 16:13:07 by jamijuhola       ###   ########.fr       */
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