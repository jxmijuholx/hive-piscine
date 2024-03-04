/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:52:09 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 14:52:57 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_power(int nb, int power)
{
    if (power  < 0)
    {
        return (0);
    }
    else if (power == 0)
    {
        return (1);
    }
    else
    {
        return (nb * (ft_recursive_power(nb, power -1)));
    }
}