/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:22:30 by prossi            #+#    #+#             */
/*   Updated: 2022/08/02 19:13:58 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zom;

	zom = (Zombie *)malloc(sizeof(Zombie) * N);
	for (int i = 0; i < N; i++)
		zom[i].setname(name);
	return (zom);
}