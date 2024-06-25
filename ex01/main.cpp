/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:12:32 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 15:19:18 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal	*animals[10];
	int				i;
	
	i = 0;
	while (i < 10)
	{
		if (i < 5)
			animals[i] = new(std::nothrow) Dog();
		else
			animals[i] = new(std::nothrow) Cat();
		if (!animals[i])
		{
			std::cerr << "Error: Failed to allocate memory" << std::endl;
			i--;
			while (i >= 0)
			{
				delete animals[i];
				i--;
			}
			return EXIT_FAILURE;
		}
		i++;
	}
	
	std::cout << std::endl;
	animals[0]->makeSound(); //Dog sound
	animals[5]->makeSound(); //Cat sound
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << std::endl;
	
	i = 0;
	while (i < 10)
	{
		if (animals[i])
			delete animals[i];
		i++;
	}
	return EXIT_SUCCESS;
}
