/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:54:45 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 14:59:34 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_fibonacci(int index)
{
    if ( index < 0)
    {
        return (-1);
    }
    else if (index == 0)
    {
        return (0);
    }
    else
    {
        return (ft_fibonacci(index - 1) + ft_fibonacci(index-1));
    }
}