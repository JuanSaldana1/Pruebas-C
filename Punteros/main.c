/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaldana <jsaldana@student.42urduliz.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:34:02 by jsaldana          #+#    #+#             */
/*   Updated: 2022/07/11 16:34:35 by jsaldana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int	*a;
	int	b;

	b = 7;
	a = &b;
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%i\n", *a);
	printf("%p\n", &b);
	printf("%i\n", b);
	if (argv[1] == NULL || *argv[1] == '\0')
	{
		printf("NULL\n");
		return (1);
	}
	else
	{
		while (*argv[1] != '\0')
		{
			printf("%c\n", *argv[1]);
			argv[1]++;
		}
	}
	return (0);
}
