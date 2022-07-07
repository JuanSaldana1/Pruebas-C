/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 09:26:52 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/06 10:06:03 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	fun(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1 + fun(n - 1));
	}
}

int	main(void)
{
	int	n;

	n = 3;
	printf("%d", fun(n));
	return (0);
}
