/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:50:16 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/07 20:03:04 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(int argc, char const *argv[])
{
	char	text_entry;
	int		counter;

	text_entry = '\0';
	counter = 0;
	write(1, "Escribe algo: ", 14);
	write(0, &text_entry, 1);
	while (text_entry != '\0')
	{
		write(1, &text_entry, counter);
		counter++;
	}
	return (0);
}
