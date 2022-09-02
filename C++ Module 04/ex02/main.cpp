/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:20:18 by prossi            #+#    #+#             */
/*   Updated: 2022/07/29 19:16:22 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main( void )
{
	Animal *tab[4];
	Brain *cat_brain;
	Brain *dog_brain;

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
		{
			tab[i] = new Dog();
			tab[i]->makeSound();
		}
		else
		{
			tab[i] = new Cat();
			tab[i]->makeSound();
		}
	}
	cat_brain = tab[0]->get_brain();
	dog_brain = tab[2]->get_brain();
	cat_brain->ideas[0] = dog_brain->ideas[0] = "Kibbles, let's GO !!";
	cat_brain->ideas[1] = dog_brain->ideas[1] = "I will rule them all";
	cat_brain->ideas[2] = dog_brain->ideas[2] = "I swear, it's not me for the slippers !";
	cat_brain->ideas[3] = dog_brain->ideas[3] = "OH, Master is putting his shoes on, maybe an outing ??";
	cat_brain->ideas[4] = dog_brain->ideas[4] = "...";
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "|" << tab[0]->get_brain()->ideas[0] << "|" << std::endl;
	*(tab[1]) = *(tab[0]);
	std::cout << "|" << tab[1]->get_brain()->ideas[1] << "|" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "|" << tab[2]->get_brain()->ideas[2] << "|" << std::endl;
	*(tab[3]) = *(tab[2]);
	std::cout << "|" << tab[3]->get_brain()->ideas[3] << "|" << std::endl;
	std::cout << "-----------------------------------" << std::endl;

	delete tab[0];
	delete tab[1];
	delete tab[2];
	delete tab[3];

	return (0);
}
