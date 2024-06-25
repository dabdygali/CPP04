/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:12:32 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 11:08:48 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal*	wa = new WrongCat();
	const WrongCat	wcat;
	
	std::cout << meta->getType() << "<--- Generic Animal" << std::endl;
	std::cout << j->getType() << "<--- Dog" << std::endl;
	std::cout << i->getType() << "<--- Cat" << std::endl;
	std::cout << wa->getType() << "<--- Type of WrongCat (as WrongAnimal pointer)" << std::endl << std::endl;
	
	j->makeSound(); //Will output the dog sound!
	i->makeSound(); //Will output the cat sound!
	meta->makeSound(); //Will output animal sound!
	wa->makeSound(); //Will output WrongAnimal sound!
	wcat.makeSound(); //Will output WrongCat sound
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;
	delete wa;
	
	return 0;
}
