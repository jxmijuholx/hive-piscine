/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:15:38 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/22 21:30:41 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	i = 0;
	while (argv[0][i] != '\0' && argc > 0)
	{
		write(1,&argv[0][i],1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}